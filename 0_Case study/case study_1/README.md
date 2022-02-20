# GAS LEAKAGE DETECTION SYSTEM USING 8051:

## Block diagram:

![Untitled Workspace (2)](https://user-images.githubusercontent.com/98894505/154837508-1d956f5c-f442-427b-a7b5-c55ec617e24d.jpg)

## Components:

### 8051 Microcontroller:
* It is a programmable integrated circuit (IC) that consists of a small CPU, RAM and I/O pins. 
* Microcontroller units (MCUs) are widely used in many devices.
* It stores the instructions and data required by the microcontroller.
* It acts as a communication medium between components for data transfer.

### GSM :
* #### GSM RX – P3.1
* GSM TX – P3.0
* The Global System for Mobile Communications (GSM) is a standard developed by the European Telecommunications Standards Institute (ETSI).
* It is developed to describe the protocols for second-generation (2G) digital cellular networks used by mobile devices such as mobile phones and tablets.
* It is a hardware device that uses GSM mobile telephone technology to provide a data link to a remote network. 
* From the view of the mobile phone network, they are essentially identical to an ordinary mobile phone, including the need for a SIM to identify themselves to the network.

### Gas Sensor:
*  #### Output – ADC’s Vin (6th Pin)
* It contains a platinum coil and is heated when it comes into contact with gaseous reactants. 
* This raises the temperature within the coil. 
* The catalytic gas sensor will sound the alarm and alert people if that temperature change is within what is considered a dangerous range.
* It can detect the presence and concentration of various hazardous gases and vapors, such as toxic or explosive gases, volatile organic compounds (VOCs), humidity, and odors.

### ADC0804:
* #### RD – P0.7
* #### WR – P0.6
* #### INTR – P0.5
* #### CS – GND
* #### Data Lines – P2
* ADC0804 is an IC(integrated circuit) which converts the input analog voltage to its equivalent digital output.
*  It is a stand alone analog to digital converter. 
*  Though now it is decades old and replaced by newer analog to digital converters which provide more flexibility, consumes less power, provides output in multiple formats and are smaller in size.

### Buzzer: 
* #### P0.1
* An audio signaling device like a beeper or buzzer may be electromechanical or piezoelectric or mechanical type. 
* The main function of this is to convert the signal from audio to sound.
*  Generally, it is powered through DC voltage and used in timers, alarm devices, printers, alarms, computers, etc. Based on the various designs, it can generate different sounds like alarm, music, bell & siren.

### Relay: 
* #### P0.0
* A relay is an electronically operated switch that is remotely activated by an electromagnet which pulls a set of contacts to either make or break a circuit. 
* Electrical relays are commonly used for switching signals, radio frequencies, high current circuits when using a lower current circuit, and loads such as resistive, motor, lamp, inductive, and capacitive applications.
*  This is helpful when an in-line switch or existing circuit does not have the capacity to handle the required current.

### LCD:
* #### RS – P3.7
* #### RW – GND
* #### EN – P3.6
* #### Data lines – P1
* It is a flat display technology, stands for "Liquid Crystal Display," which is generally used in computer monitors, instrument panels, cell phones, digital cameras, TVs, laptops, tablets, and calculators. 
* It is a thin display device that offers support for large resolutions and better picture quality.

## Explanation:

* A gas sensor is used to detect the Gas, which is connected to 8051 microcontrollers through ADC0804.
* LCD is used to Display the Gas level and Relay status.
* GSM is used to send the message when it detects the Gas in-room or home.
* The buzzer also makes a sound when the controller detects any Gas.
* Relay also connected to Micro Controller. 
* The house’s electricity power will go through this relay. When it detects gas leakage, the relay goes off.
*  So house electricity will be off. 
* It will prevent the other damages by electricity.
* Finally, it sends the message to the house owner about gas leakage using GSM.






