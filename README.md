# POTENTIOMETER WITH LED LIGHT

#### REQUIREMENTS
- ESP32
- Jumping Wires
- Potentiometer
- Led light (Red, Green, Blue, etc...)
- Breadboard

#### WIRINGS
1. Led light signal connect to GPIO pin 2
2. Potentiometer is connected to:
    - **VCC:** 3 volts
    - **OUT:** GPIO pin 34
    - **Ground:** GND
## DIGITAL
| digitalRead | digitalWrite|
|-------------|-------------|
|**Note:** The ESP32 pins are generally 3.3V logic, and some pins might not support digital input if they're not configured correctly. | **Pin Initialization:** Before using digitalWrite, the pin must be properly initialized using pinMode(pin, OUTPUT) to set it as an output pin. If you attempt to write to a pin that isn't configured as an output, the behavior might be undefined.
**Usage:** You can use digitalRead to check the status of switches, buttons, or sensors connected to GPIO pins.| **Usage:** You can use digitalWrite to control LEDs, relays, or any digital actuator connected to the ESP32. |

## ANALOG
| analogRead | analogWrite|
|-------------|-------------|
|**Function:** Reads the value of an analog signal from a specific pin and converts it to a digital value using the ADC (Analog-to-Digital Converter).| **Function:** This function does not directly produce a true analog output. Instead, it generates a PWM (Pulse Width Modulation) signal, which simulates an analog output by rapidly switching the pin between HIGH and LOW states. The duty cycle of the PWM determines the average voltage output.
**Usage:** You can use analogRead to read the output of analog sensors, like temperature sensors (e.g., LM35) or light sensors (e.g., LDR), which generate a continuous voltage based on some physical property. | **Usage:** analogWrite can be used to simulate an analog output, such as controlling the brightness of an LED, the speed of a motor, or the intensity of a light using PWM. |

#### Map
Map the value to a range (optional, for better readability)
```js
//int variable_name = map(variable_name, minimumInput, maximumInput, minimumOutput, maximumOutput);
int mappedValue = map(potValue, 0, 4095, 0, 100);
```
##### Explanation:
- **mappedValue:** Variable name.
- **map:** used to re-map a number from one range to another.  It allows you to take an input value within a specific range and scale it to a different range.
- **potValue:** it is a variable name.
