# MPU6050 / BMA400 – Sensor Placement Validation

## Objective

To determine the most suitable position for an IMU-based
accelerometer in the PRAAN health-monitoring jacket for
activity and fall-event detection.

## Sensor

- Sensor: MPU6050
- Measurement: 3-axis acceleration
- Axes: X, Y, Z
- Interface: I²C
- Accelerometer range: ±2 g
- Controller: ESP32
- Sampling interval: 20 ms
- Approximate sampling rate: 50 Hz

## Positions Tested

Three candidate mounting positions were considered:

1. Chest
2. Upper arm
3. Waist / lower torso

## Activities Evaluated

Normal activities:

- Standing
- Sitting
- Walking
- Sit-to-stand
- Stand-to-sit

Controlled impact activity:

- Controlled impact/drop experiment using a soft test object

No uncontrolled human fall was required for the experiment.

## Parameters Recorded

The following parameters were recorded:

- Timestamp
- X-axis acceleration
- Y-axis acceleration
- Z-axis acceleration
- Acceleration magnitude
- Sensor position
- Activity
- Trial number

Acceleration magnitude was calculated as:

A = sqrt(Ax² + Ay² + Az²)

## Evaluation Criteria

The positions were compared using:

- RMS acceleration during normal activity
- Peak acceleration during impact
- Separation between normal and impact signals
- Motion artefacts
- Mechanical stability
- Suitability for integration into the jacket

## Result

The waist / lower torso position showed the largest separation
between normal movement and the impact signal, while producing
comparatively lower motion artefacts.

Therefore, the waist / lower torso was selected as the proposed
MPU6050/BMA400 mounting position for PRAAN.

## Important Limitation

This is prototype-level validation. Further testing with
multiple users, different body types, different activities
and controlled fall scenarios is required before making
clinical or safety-critical performance claims.
