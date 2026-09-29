#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {

  Serial.begin(115200);
  Wire.begin();

  mpu.initialize();

  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while (1);
  }

  // ±2 g range
  mpu.setFullScaleAccelRange(MPU6050_ACCEL_FS_2);

  Serial.println("time_ms,Ax_g,Ay_g,Az_g,acceleration_g");
}

void loop() {

  int16_t ax_raw;
  int16_t ay_raw;
  int16_t az_raw;

  mpu.getAcceleration(&ax_raw, &ay_raw, &az_raw);

  float Ax = ax_raw / 16384.0;
  float Ay = ay_raw / 16384.0;
  float Az = az_raw / 16384.0;

  float magnitude =
      sqrt((Ax * Ax) +
           (Ay * Ay) +
           (Az * Az));

  Serial.print(millis());
  Serial.print(",");
  Serial.print(Ax, 3);
  Serial.print(",");
  Serial.print(Ay, 3);
  Serial.print(",");
  Serial.print(Az, 3);
  Serial.print(",");
  Serial.println(magnitude, 3);

  delay(20);
}
