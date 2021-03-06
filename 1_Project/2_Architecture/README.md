# 1 BLOCK DIAGRAM AND EXPLANATION:

## 1.1 BLOCK DIAGRAM OF TRANSMITTOR:


 ![Untitled Workspace (5)](https://user-images.githubusercontent.com/98894505/155832250-28a10bb4-6a06-4893-b8ae-992a323f4fd9.jpg)

## 1.2 BLOCK DIAGRAM OF RECIEVER:

![Untitled Workspace (6)](https://user-images.githubusercontent.com/98894505/155832356-38b51b3f-4279-45a1-87ff-d764dc221093.jpg)

## 1.3 SENSORS:

### INFRARED SENSOR ( IR SENSOR ):

* IR detectors are specially filtered for Infrared light, they are not good at detecting visible light. 
*  In a defined angle range, the sensor elements detect the heat radiation (infrared radiation) that changes over time and space due to the movement of people. 
*  The main benefits of IR sensors are low power usage, their simple design & their convenient features.
*  IR signals are not noticeable by the human eye. The IR radiation in the electromagnetic spectrum can be found in the regions of the visible & microwave.

### TEMPERATURE SENSOR (THERMISTOR):

* Temperature sensor will detect temperature or heat.
* Temperature Sensors measure the amount of heat energy or even coldness that is generated by an object or system, allowing us to “sense” or detect any physical change to that temperature producing either an analogue or digital output.

### PROXIMITY SENSOR:

* A proximity sensor is a sensor which detects the presence of nearby objects without any physical contact.
* This can be done using the electromagnetic field or electromagnetic radiation beam in which the field or return signal changes in the event of the presence of any object in its surrounding.
*  It can detect both metallic and non-metallic objects, including liquid, powders, and granular elements.

## 1.4 ACTUATORS:

### LCD DISPLAY WITH I2C:

* It is much easier to connect an I2C LCD than to connect a standard LCD. You only need to connect 4 pins instead of 12. 
* Start by connecting VIN pin to the 5V output on the Arduino and connect GND to ground. Now we are remaining with the pins that are used for I2C communication.  
* Each Arduino Board has different I2C pins which should be connected accordingly. On the Arduino boards with the R3 layout, the SDA (data line) and SCL (clock line) are on the pin headers close to the AREF pin. They are also known as A5 (SCL) and A4 (SDA).

### RELAY:
 
* Relay is an electrically operated switch. It consists of a set of input terminals for a single or multiple control signals, and a set of operating contact terminals. 
* The switch may have any number of contacts in multiple contact forms, such as make contacts, break contacts, or combinations . 
* Relays are used where it is necessary to control a circuit by an independent low- power signal, or where several circuits must be controlled by one signal. Relays were first used in long-distance telegraph circuits as signal repeaters. 
* They refresh the signal coming in from one circuit by transmitting it on another circuit.
*  Relays were used extensively in telephone exchanges and early computers to perform logical operations.

### SERVO MOTOR:

* All motors have three wires coming out of them. Out of which two will be used for Supply (positive and negative) and one will be used for the signal that is to be sent from the MCU. Servo motor is controlled by PWM (Pulse with Modulation) which is provided by the control wires. 
* There is a minimum pulse, a maximum pulse and a repetition rate. 
* Servo motor can turn 90 degree from either direction form its neutral position. 
* The servo motor expects to see a pulse every 20 milliseconds (ms) and the length of the pulse will determine how far the motor.
* turns. For example, a 1.5ms pulse will make the motor turn to the 90° position, such as if pulse is shorter than 1.5ms shaft moves to 0° and if it is longer than 1.5ms than it will turn the servo to 180°.

### DC MOTOR:

* An electric motor operated by DC (direct current) is known as a DC motor (unlike an induction motor that operates via an alternating current). 
* A DC motor converts DC electrical energy into mechanical energy.
* DC motors take electrical power through direct current, and convert this energy into mechanical rotation.
* DC motors use magnetic fields that occur from the electrical currents generated, which powers the movement of a rotor fixed within the output shaft. 
* The output torque and speed depends upon both the electrical input and the design of the motor.

### BUZZER / LED:

#### BUZZER:

* Buzzer is an electrical device that makes a buzzing noise and is used for signalling.

#### LED:

* It is a semiconductor diode that emits light when conducting current and is used in electronic displays, indoor and outdoor lighting, etc.
* It convert electrical energy directly into light, delivering efficient light generation with little-wasted electricity.

# 2 Structural diagram:

![Colorful Cosmic Sky Steps Diagram (2)](https://user-images.githubusercontent.com/98894505/157175808-01026a65-d06c-4609-aaee-c7c2fd5e9128.png)

# 3 Behavioural diagram:

![Elements of Design Venn Diagram](https://user-images.githubusercontent.com/98894505/157173143-e192eb18-d3e7-47c3-903e-ea1cbf7aa155.png)

# 4 Flow chart:

![Untitled Diagram drawio (1)](https://user-images.githubusercontent.com/98894505/157110463-d3927d16-351f-46d9-b689-bf13cb577067.png)












