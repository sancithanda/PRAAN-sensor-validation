#include <Wire.h>
#include "MAX30105.h"
#include "heartRate.h"

MAX30105 sensor;

void setup()
{
  Serial.begin(115200);
  Wire.begin();

  if (!sensor.begin(Wire, I2C_SPEED_FAST))
  {
    Serial.println("MAX30102 not detected");
    while (1);
  }

  sensor.setup();

  sensor.setPulseAmplitudeRed(0x24);
  sensor.setPulseAmplitudeIR(0x24);

  Serial.println("time_ms,IR,RED");
}

void loop()
{
  long irValue = sensor.getIR();
  long redValue = sensor.getRed();

  Serial.print(millis());
  Serial.print(",");
  Serial.print(irValue);
  Serial.print(",");
  Serial.println(redValue);

  delay(20);
}
