# MAX30102 – Heart Rate & SpO₂ Sensor Placement Validation

## Objective

To determine the most suitable mounting position for the
MAX30102 PPG sensor in the PRAAN health-monitoring jacket
by comparing signal quality, heart-rate readings, SpO₂
readings and motion artefacts at different body positions.

## Sensor

- Sensor: MAX30102
- Measurements: Heart Rate and SpO₂
- Sensing principle: Photoplethysmography (PPG)
- Interface: I²C
- Controller: ESP32
- Sampling rate: [actual value used]

## Positions Tested

Three candidate positions were evaluated:

1. Left chest
2. Upper arm
3. Wrist

## Experimental Conditions

Measurements were taken during:

- Resting condition
- Light movement
- Normal daily movement

The same test conditions were used for each sensor position.

## Parameters Recorded

- Timestamp
- IR signal
- Red signal
- Heart rate (BPM)
- SpO₂ (%)
- Sensor position
- Activity/condition
- Trial number

## Evaluation Criteria

The positions were compared using:

- Heart-rate stability
- SpO₂ stability
- PPG signal quality
- Signal-to-noise ratio
- Motion artefacts
- Sensor contact stability
- Suitability for integration into the jacket

## Result

The left-chest position provided a stronger and more stable
PPG signal with comparatively lower motion artefacts.

Therefore, the left chest position was selected for integration
of the MAX30102 in the PRAAN jacket.

## Limitation

The results represent prototype-level validation and should
not be interpreted as clinical validation. Further testing
against a medically validated reference device and across
multiple users is required.
