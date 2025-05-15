**Mobile and Network Forensics activity**

**Topic: Smart-light:** A smart light is an automated lighting system that turns ON or OFF based on conditions like motion or light levels, helping save energy and improve convenience.

**Main features:**
1. The project focuses on building a smart light system using Light Dependent Resistor (LDR), Passive Infrared Sensor (PIR), Relay module and ESP32 microcontroller
2. The aim of the project is to create an energy efficient light system which automatically turns on when it is dark and turns off when there is light.
3. Reduces unnecessary power consumption
4. The LDR is used to measure the ambient light level whereas the PIR sensor is used to detect motion. Relay module acts like a switch.

**Components used in the project-**
1. ESP32 Dev Module (WROOM32)
2. LDR board and sensor
3. Resistor
4. PIR sensor
5. Relay module
6. LED light (circuit light)
7. Breadboard
8. Jumper wires
9. Arduino IDE software

**Connections:**
1. Firstly two male to male jumper wires is connected from ESP32 - 3.3V and GND to the positive and negative points on the breadboard
2. LDR connection:
● Firstly the LDR sensor board is taken- this converts analog signals to digital signals, the LDR sensor is soldered onto the board.
● It has 3 pins- VCC, GND, output pin
● The VCC (voltage pin) is connected to the 3.3 V
● GND is connected to GND pin
● Output is connected to D4
3. PIR sensor:
● VCC → 3.3V
● GND → GND
● OUT → D18 (Digital Input Pin)
4. Relay module:
● IN → D5 (Digital Output Pin)
● VCC → 3.3V
● GND → GND
5. LED light:
● The LED light is connected to the relay module. One leg is soldered where the wire goes to the GND and the other goes into the relay module itself i.e the common point. Since the relay module acts like a switch, when motion is detected and it is dark the light switches one. But the light doesn’t turn on when it is light and motion is detected.

SCREENSHOTS:
![image](https://github.com/user-attachments/assets/4040f4bd-54d9-4c3f-91ef-fb85100533bd)
![image](https://github.com/user-attachments/assets/d75cac14-07ad-42ea-94ed-2fb277c5c05f)
![image](https://github.com/user-attachments/assets/637d349f-24e7-46df-aeb5-0af3d4365a8c)
