# Four-way-traffic-light-controller
 
OBJECTIVE:-
Traffic Lights or Traffic Signals are signalling devices that are used to control the flow
of traffic. The traffic lights will provide instructions to people by displaying lights of
three colours i.e. Red, Yellow and Green. Red means stop green means go and
yellow means get prepared to go. Arduino based Traffic Light Controller system is a
simple implementation of traffic lights system with pre-defined time limits using LEDs
and Arduino board with the help of Arduino coding.

SYNTAX AND FUNCTIONS USED: -
1) setup()
This function is called at the beginning of the sketch. It is used for initializing
variables, pin modes etc.
2) loop()
Once the setup function is completed, the loop function is executed over and over
continuously.
3) pinMode(pin,mode)
This function is used to configure the pin specified to behave as input (INPUT) or
output(OUTPUT).
4) digitalWrite(pin,value)
This function is used to write a HIGH(ON) or a LOW(OFF) value to a digital pin.
5)delay()
Pauses the program for specified amount of time (in milliseconds).

CODE DESCRIPTION: -
First of all the wires from the 12 LEDs were connected to the digital pins of Arduino
board and were specified in the program as mentioned below. 
int r1=2;
int y1=3;
int g1=4;
int r2=5;
int y2=6;
int g2=7;
int r3=8;
int y3=9;
int g3=10;
int r4=11;
int y4=12;
int g4=13;

Then pinMode(pin,mode) functions were declared under void setup().

void setup()
{
 pinMode(r1,OUTPUT);
 pinMode(y1,OUTPUT);
 pinMode(g1,OUTPUT);
 pinMode(r2,OUTPUT);
 pinMode(y2,OUTPUT);
 pinMode(g2,OUTPUT);
 pinMode(r3,OUTPUT);
 pinMode(y3,OUTPUT);
 pinMode(g3,OUTPUT);
 pinMode(r4,OUTPUT);
 pinMode(y4,OUTPUT);
 pinMode(g4,OUTPUT);
}

Then under void lopp() function, the program was executed. 

In this model, first the Lane 1 got its green light turned on and in all the
other lanes, their corresponding red lights were turned on. After a time
delay of 3 secs, the green light in the Lane 1 was turned off and the yellow
light in the Lane 1 was turned on indicating that the red light was about to
light up. That was followed by a time delay of 1 sec.

void loop()
{
 digitalWrite(g1,HIGH);
 digitalWrite(r2,HIGH);
 digitalWrite(r3,HIGH);
 digitalWrite(r4,HIGH);
 delay(3000);

 digitalWrite(g1,LOW);
 digitalWrite(y1,HIGH);
 delay(1000);
 
Then the yellow light in Lane 1 was turned off and the red light was turned
on. Also at the same time the red light in Lane 2 was turned off and green
light was turned on. After a time delay of of 3 secs, the green light in the
Lane 2 was turned off and the yellow light in the Lane 2 was turned on.
That was followed by a time delay of 1 sec.

digitalWrite(y1,LOW);
digitalWrite(r1.HIGH);
digitalWrite(r2,LOW);
digitalWrite(g2,HIGH);
digitalWrite(r3,HIGH);
digitalWrite(r4,HIGH);
 delay(3000);
 digitalWrite(g2,LOW);
 digitalWrite(y2,HIGH); 
 delay(1000);
 
Then the yellow light in Lane 2 was turned off and the red light was turned
on. Also at the same time the red light in Lane 3 was turned off and green
light was turned on. After a time delay of of 3 secs, the green light in the
Lane 3 was turned off and the yellow light was turned on. That was
followed by a time delay of 1 sec.
 digitalWrite(y2,LOW);
 digitalWrite(r2,HIGH);
 digitalWrite(r3,LOW);
 digitalWrite(g3,HIGH);
 digitalWrite(r1,HIGH);
 digitalWrite(r4,HIGH);
 delay(3000);
 digitalWrite(g3,LOW);
 digitalWrite(y3,HIGH);
 delay(1000);
 
Then the yellow light in Lane 3 was turned off and the red light was turned
on. Also at the same time the red light in Lane 4 was turned off and green
light was turned on. After a time delay of of 3 secs, the green light in the
Lane 4 was turned off and the yellow light was turned on. That was
followed by a time delay of 1 sec. Then the yellow light was turned off.
digitalWrite(y3,LOW);
 digitalWrite(r3,HIGH);
 digitalWrite(r4,LOW);
 digitalWrite(g4,HIGH);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay(3000); 
 digitalWrite(g4,LOW);
 digitalWrite(y4,HIGH);
 delay(1000);
 digitalWrite(y4,LOW);
}

The system then loops back to Lane 1 where the process mentioned above
will be repeated all over again.
