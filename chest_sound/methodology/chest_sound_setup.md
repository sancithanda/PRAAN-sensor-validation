# Chest Sound Experimental Methodology

## Objective

To determine the optimal mounting position for acquiring
respiratory/chest acoustic signals in the PRAAN jacket.

## Hardware

- ESP32
- Chest sound sensor / MEMS microphone
- Mounting interface
- Jacket/cloth layer

## Positions Tested

1. Upper chest / sternum
2. Lower chest

## Breathing Conditions

- Quiet breathing
- Normal breathing
- Deep breathing

## Procedure

1. The acoustic sensor was connected to the ESP32.
2. The sensor was securely mounted at the selected chest position.
3. Audio samples were recorded during controlled breathing
   conditions.
4. The same breathing conditions were repeated for the
   second position.
5. The recorded signal was analysed in the time domain.
6. Frequency-domain analysis was performed using a spectrogram.
7. Signal-to-noise ratio was calculated.
8. Signal amplitude and waveform stability were compared.

## Evaluation Criteria

- Signal amplitude
- SNR
- Respiratory waveform clarity
- Background noise
- Sensor displacement
- Suitability for textile integration

## Selected Position

Upper chest / sternum.

## Reason

The upper chest position produced a stronger respiratory
signal and higher SNR with comparatively lower interference.
