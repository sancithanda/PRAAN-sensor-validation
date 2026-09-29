# Sensor Placement Validation – Summary

## Objective

The sensor positions were compared experimentally to identify
locations providing suitable signal quality, stability and
low motion interference for integration into the PRAAN jacket.

## Final Selection

| Sensor | Selected Position | Primary Selection Metric |
|---|---|---|
| MPU6050 / BMA400 | Waist / Lower torso | Impact separation |
| MAX30102 | Left chest | PPG signal quality / SNR |
| Chest Sound Sensor | Upper chest / Sternum | Respiratory signal SNR |

## Results

### MPU6050 / BMA400

The waist/lower-torso position produced the highest observed
impact peak and the largest separation between normal activity
and controlled impact among the tested positions.

- Normal activity RMS: ~0.9 g
- Impact peak: ~3.8 g
- Selected position: Waist / lower torso

### MAX30102

The left-chest position produced the strongest and most stable
PPG signal among the tested locations.

- Heart rate: ~72 BPM
- SpO₂: ~98%
- PPG SNR: ~18.4 dB
- Selected position: Left chest

### Chest Sound Sensor

The upper-chest/sternum position produced the strongest
respiratory waveform and highest measured SNR.

- Signal amplitude: ~0.82 a.u.
- SNR: ~16.7 dB
- Selected position: Upper chest / sternum

## Overall Conclusion

The selected positions provide a practical starting point for
integrating the sensors into the PRAAN wearable jacket.

Further validation across multiple users, body types and
activity conditions is required.
