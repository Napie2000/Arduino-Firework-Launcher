	@Cedric Van Eeckhout
	--------------------
	/***********************************************************************************************/
	/			I've made this project with the help of:				/
	/	Circuit Basics: http://www.circuitbasics.com/arduino-ir-remote-receiver-tutorial/	/
	/   SherMarri(Instructables): https://www.instructables.com/id/7-Segment-Display-On-Arduino/	/
	/***********************************************************************************************/

	Needs:
	You need a Arduino Uno,
	7 Segment display x1
	220 ohm x3
	Green Led, Red Led x1
	IR receiver LED x1
	Relay x1
	Lithium Battery x1
	Fuse from nichrome wire x1

	I didn't make a visual for this one. You can use the sites or use the PDF I've made from 
	the sites.
	
	

	Setup:

	Connecting 7 Segment to Arduino:

	Arduino Pin 2 to Pin 9.
	Arduino Pin 3 to Pin 10.
	Arduino Pin 4 to Pin 4.
	Arduino Pin 5 to Pin 2..
	Arduino Pin 6 to Pin 1.
	Arduino Pin 8 to Pin 7.
	Arduino Pin 9 to Pin 6.
	GND to Pin 3 and Pin 8 each connected with 220 ohm resistors.

	Connecting IR receiver to Arduino:

	Arduino Pin 7 to Pin S.
	Arduino Pin GND to Pin GND.
	Arduino Pin 5V to Vcc.

	Connecting Relay to Arduino:
	
	Arduino Pin GND to Pin GND.
	Arduino Pin 5V to Pin Vcc.
	Arduino Pin 10 to Pin IN1.

	Connecting Red and Green LED to Arduino.

	Arduino Pin 10 to Anode Green LED with 220 ohm resistor.
	Arduino Pin 11 to Anode Red LED.
	Arduino Pin GND to Cathode Green, Red LED.

	Connecting Lithium Battery and nichrome wire fuse trough relay.

	You have a normal open, normal closed and the middle one where u can connect the wires.
	You connect the Cathode and one wire of the fuse in the normal closed.
	In the middle one you connect the other cable of the fuse.
	And at least in the normal open you connect the Anode of the Lithium battery.

	
	That was all the information you need to compleet it!

	@Cedric Van Eeckhout
	____________________
	