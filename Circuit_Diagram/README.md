# Circuit Diagram

The circuit for the Women’s Safety Bag – Smart Emergency Alert System was designed and tested using Multisim.

## Components Connections (Overview)

- **Arduino Uno**
  - Panic Button → Digital Pin 2
  - Vibration Sensor → Digital Pin 5
- **GPS Module (Neo-6M)**
  - TX → Arduino RX
  - RX → Arduino TX
- **GSM Module (SIM800/SIM900)**
  - TX → Arduino Digital Pin 7
  - RX → Arduino Digital Pin 8
- **Power Supply**
  - Battery → Arduino VIN and GND

## Notes
- Proper voltage regulation is required for GSM module
- Antenna connection is necessary for reliable GSM communication
- GPS requires clear sky view for accurate location tracking

The Multisim circuit schematic can be added in future updates.
