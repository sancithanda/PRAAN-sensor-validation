# Chest Sound Sensor – Placement Validation

## Objective

To determine the most suitable chest position for acquiring
respiratory sounds for the PRAAN wearable health-monitoring
jacket.

## Sensor

- Sensor: MEMS microphone / chest sound sensor
- Measurement: Chest/respiratory acoustic signal
- Controller: ESP32
- Sampling rate: 8 kHz
- Recording format: WAV / PCM

## Positions Tested

1. Upper chest / sternum
2. Lower chest

## Experimental Conditions

Measurements were recorded during:

- Quiet breathing
- Normal breathing
- Deep breathing

The same breathing conditions were used for each sensor
position.

## Parameters Evaluated

- Signal amplitude
- Signal-to-noise ratio (SNR)
- Respiratory waveform clarity
- Frequency characteristics
- Sensor displacement
- Background noise

## Result

The upper chest / sternum position produced a stronger and
more stable respiratory waveform with comparatively higher
signal-to-noise ratio.

Therefore, the upper chest / sternum position was selected
for integration into the PRAAN jacket.

## Limitation

The experiment validates acoustic signal acquisition and
sensor placement. It does not by itself constitute clinical
validation or respiratory-disease classification.
