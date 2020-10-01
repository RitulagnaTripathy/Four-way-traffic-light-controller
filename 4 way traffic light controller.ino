//four way traffic light controller using arduino

int r1=2; //declaration of variables
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

void setup() //initialisation of pinModes 
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

void loop()//execution of program 
{
  digitalWrite(g1,HIGH); //for turning on green light at 1st signal and red lights at other signals 
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  delay(3000); //pause for 3 secs
  
  digitalWrite(g1,LOW); //for turning off green light and turning on yellow light at 1st signal
  digitalWrite(y1,HIGH);
  delay(1000); //pause for 1 sec

  digitalWrite(y1,LOW);//for turning off yellow light and turning on red light at 1st signal
  digitalWrite(r1.HIGH);
  digitalWrite(r2,LOW);//for turning off red light and turning on green light at 2nd signal
  digitalWrite(g2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  delay(3000);//pause for 3 secs
  
  digitalWrite(g2,LOW);//for turning off green light and turning on yellow light at 2nd signal
  digitalWrite(y2,HIGH);
  delay(1000);//pause for 1 sec
    
  digitalWrite(y2,LOW);//for turning off yellow light and turning on red light at 2nd signal
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);//for turning off red light and turning on green light at 3rd signal
  digitalWrite(g3,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r4,HIGH);
  delay(3000);//pause for 3 secs

  digitalWrite(g3,LOW);//for turning off green light and turning on yellow light at 3rd signal
  digitalWrite(y3,HIGH);
  delay(1000);//pause for 1 sec

  digitalWrite(y3,LOW);//for turning off yellow light and turning on red light at 3rd signal
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);//for turning off red light and turning on green light at 4th signal
  digitalWrite(g4,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  delay(3000);//pause for 3 secs

  digitalWrite(g4,LOW);//for turning off green light and turning on yellow light at 4th signal
  digitalWrite(y4,HIGH);
  delay(1000);//pause for 1 sec

  digitalWrite(y4,LOW);//for turning off yellow light at 4th signal

}
