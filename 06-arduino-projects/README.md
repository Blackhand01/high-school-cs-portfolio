# Arduino Projects

Embedded systems development with Arduino microcontrollers. These projects demonstrate hardware interaction, sensor reading, and real-world application development.

## 📁 Structure

### `led-control/`
Digital and PWM-based LED operations

**Projects**:
- `blink-button.ino` - Basic LED with button control
- `pwm-led-control.ino` - Analog PWM brightness control
- `brightness-regulator-potentiometer.ino` - Potentiometer-controlled brightness
- `christmas-lights.ino` - Sequential LED animation

**Skills**:
- Digital I/O operations
- PWM (Pulse Width Modulation)
- Button debouncing
- Timing and delays

### `sensors/`
Analog sensor reading and integration

**Projects**:
- `photoresistor-led.ino` - Light-dependent LED control
- `photoresistor-buzzer.ino` - Light sensor with audio feedback
- `potentiometer-analog.ino` - Analog input reading
- `reaction-timer-serial.ino` - Serial communication for timing experiments

**Skills**:
- Analog-to-Digital conversion (ADC)
- Serial communication
- Sensor calibration
- Real-time data processing

### `infrared-control/`
IR remote and transmission protocols

**Projects**:
- `tv-b-gone/` - Universal TV power button emulator
  - `tv-b-gone.ino` - Main implementation
  - `main.h` - Configuration
  - `world-ir-codes.h` - IR codes database
- `ir-remote-codes.h` - IR protocol definitions

**Skills**:
- IR transmission
- Protocol implementation
- Hardware timing precision
- Code databases

### `security/`
Security and hacking demonstrations

**Projects**:
- `rubber-ducky/` - USB keyboard emulator concepts
  - `rubber-ducky-notes.txt` - Implementation notes

**Skills**:
- HID (Human Interface Device) concepts
- Security awareness
- Ethical hacking principles

## 🛠️ Hardware Requirements

- **Arduino Uno/Nano** microcontroller
- **LEDs** (5mm, 330Ω resistors)
- **Buttons** (pushbuttons, 10kΩ pull-down resistors)
- **Sensors**:
  - Photoresistors (light-dependent resistors)
  - Potentiometers
  - Buzzers/speakers
- **IR Components**:
  - IR LED transmitter
  - IR receiver (for learning)
- **Power supply** (USB or external 5V/9V)

## 📖 How to Upload

1. **Install Arduino IDE**: [arduino.cc](https://www.arduino.cc/en/software)
2. **Select Board**: Tools → Board → Arduino Uno (or your model)
3. **Select Port**: Tools → Port → COM3 (or /dev/ttyUSB0)
4. **Load Sketch**: File → Open → select `.ino` file
5. **Upload**: Click Upload button or Ctrl+U
6. **Monitor**: Tools → Serial Monitor (for projects with serial output)

## 📊 Project Progression

| Level | Project | Concepts |
|-------|---------|----------|
| Beginner | Blink Button | Digital I/O, logic |
| Beginner | Potentiometer | Analog input, mapping |
| Intermediate | PWM LED | Analog output, timing |
| Intermediate | Sensors | ADC, data processing |
| Advanced | IR Control | Protocols, timing precision |
| Advanced | Serial Communication | Data transmission |

## 🎓 Learning Outcomes

- Microcontroller programming fundamentals
- Hardware-software interfacing
- Embedded systems design
- Real-world sensor applications
- Debugging embedded systems
- Protocol implementation

## ⚠️ Safety Notes

- Always use current-limiting resistors with LEDs
- Don't exceed 5V on Arduino inputs
- Use proper power supplies for high-current projects
- Never connect digital pins directly to mains electricity
- Use pull-up/pull-down resistors appropriately

## 📚 References

- [Arduino Official Documentation](https://www.arduino.cc/reference/en/)
- [Arduino Language Reference](https://www.arduino.cc/en/Language)
- IR Protocols: [IR Remote Codes](https://www.sbprojects.net/knowledge/ir/rc5.php)
