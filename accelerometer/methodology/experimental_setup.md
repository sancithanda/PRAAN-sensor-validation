# Experimental Setup – Accelerometer

## Hardware

- ESP32 development board
- MPU6050 IMU
- Jumper wires
- Battery/USB power source
- Jacket or mounting surface

## Sensor Positions

The MPU6050 was evaluated at:

1. Chest
2. Upper arm
3. Waist / lower torso

## Procedure

1. Connect the MPU6050 to the ESP32 through I²C.
2. Verify the sensor using the I²C connection test.
3. Configure the accelerometer for the ±2 g range.
4. Calibrate the sensor while stationary.
5. Secure the sensor at the selected body position.
6. Record acceleration during normal activities.
7. Repeat the same activities for each position.
8. Perform a controlled impact experiment using a safe,
   non-human test setup.
9. Record X, Y and Z acceleration.
10. Calculate acceleration magnitude.
11. Calculate RMS acceleration for normal activities.
12. Determine peak acceleration during impact.
13. Compare the three mounting positions.

## Selection Criteria

The final position was selected based on:

- Impact signal magnitude
- Normal activity RMS
- Separation between normal and impact signals
- Motion artefacts
- Sensor stability
- Suitability for wearable integration

## Selected Position

Waist / lower torso.
