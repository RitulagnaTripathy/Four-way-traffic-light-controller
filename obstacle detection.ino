int trigPin1=3;
int trigPin2=5;
int trigPin3=7;
int trigPin4=9;

int echoPin1=2;
int echoPin2=4;
int echoPin3=6;
int echoPin4=8;

int const buzzPin = 10;

int distance1,distance2,distance3,distance4;
long duration1,duration2,duration3,duration4;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin1, OUTPUT); 
  pinMode(trigPin2, OUTPUT); 
  pinMode(trigPin3, OUTPUT); 
  pinMode(trigPin4, OUTPUT); 
  
  pinMode(echoPin1, INPUT); 
  pinMode(echoPin2, INPUT); 
  pinMode(echoPin3, INPUT); 
  pinMode(echoPin4, INPUT); 
  
  pinMode(buzzPin, OUTPUT); 
}

void loop()
{
  digitalWrite(trigPin1, HIGH);
  digitalWrite(trigPin2, HIGH);
  digitalWrite(trigPin3, HIGH);
  digitalWrite(trigPin4, HIGH); 
  delay(500);
  digitalWrite(trigPin1, LOW);
  digitalWrite(trigPin2, LOW);
  digitalWrite(trigPin3, LOW);
  digitalWrite(trigPin4, LOW);
  
  duration1 = pulseIn(echoPin1, HIGH);
  distance1= (duration1*0.034)/2;
  duration2 = pulseIn(echoPin2, HIGH);
  distance2= (duration2*0.034)/2;
  duration3 = pulseIn(echoPin3, HIGH);
  distance3= (duration3*0.034)/2;
  duration4 = pulseIn(echoPin4, HIGH);
  distance4= (duration4*0.034)/2;
   
  if ((distance1 <= 100 && distance1 >= 0)||(distance2 <= 100 && distance2 >= 0)||(distance3 <= 100 && distance3 >= 0)||(distance4 <= 100 && distance4 >= 0))
  {
    digitalWrite(buzzPin, HIGH);
  } 
  else 
  {
    digitalWrite(buzzPin, LOW);
  }
    
}
