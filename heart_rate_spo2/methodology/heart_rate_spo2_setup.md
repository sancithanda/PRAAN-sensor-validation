# MAX30102 Experimental Methodology

## Objective

To identify the most suitable placement of the MAX30102
for continuous heart-rate and SpO₂ monitoring in PRAAN.

## Hardware

- ESP32
- MAX30102
- Jumper/flexible wiring
- Wearable jacket mounting arrangement

## Positions Tested

1. Left chest
2. Upper arm
3. Wrist

## Experimental Procedure

1. The MAX30102 was connected to the ESP32 through I²C.
2. The sensor was checked for proper communication.
3. The sensor was securely mounted at the selected position.
4. The user remained stationary for the resting measurement.
5. Heart-rate and SpO₂ data were recorded.
6. Light movement was introduced to evaluate motion artefacts.
7. The same procedure was repeated for the other positions.
8. PPG waveforms were compared.
9. Heart-rate and SpO₂ stability were evaluated.
10. Signal quality and motion artefacts were compared.

## Selection Criteria

The final position was selected based on:

- PPG signal quality
- Heart-rate stability
- SpO₂ stability
- Motion artefacts
- Contact stability
- Suitability for continuous jacket-based monitoring

## Selected Position

Left chest / near-heart region.

## Reason

The left-chest position provided stronger and more stable PPG
signals with comparatively lower motion artefacts during the
tested conditions.
