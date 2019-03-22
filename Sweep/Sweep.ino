










#include <Servo.h>
Servo servo1, servo2, servo3, servo4, servo5, servo6;
int pos = 0;    
const int pingPin = 7; 
const int echoPin = 4; 


void setup() {
  Serial.begin(9600);
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo1.attach(3);  
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}


void loop() {
  servo1.write(0);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  for (pos = 0; pos <= 180; pos += 5) { 
    servo1.write(pos);     
    ultrasonic();         
    delay(1000);                       
  }
  for (pos = 180; pos >= 0; pos -= 5) { 
    servo1.write(pos); 
    ultrasonic();               
    delay(1000);                       
  }
}
void ultrasonic() 
{
   int duration, distance;
   digitalWrite(pingPin, LOW);
   delay(2);
   digitalWrite(pingPin, HIGH);
   delay(10);
   digitalWrite(pingPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = duration / 29 / 6;
   Serial.println(distance);
   delay(100);
   servorot(distance);
}

void servorot(int d)
{
  if(d<3 || d>18)
  {
    Serial.println("Unable to pick the Object!");
  }
  else //if(d>=3 && d<=6)
  {
    delay(2000);
    Serial.println("d>=3 && d<=18");
    servo2.write(20);
    delay(2000);
    servo3.write(150);
    delay(2000);
    servo5.write(130);
    delay(2000);
    servo5.write(90);
    delay(2000);
    servo3.write(135);
    delay(2000);
    servo2.write(0);
    delay(2000);
    exit(0);
  }
  /*else if(d>6 && d<=9)
  {
    Serial.println("d>6 && d<=9");
    servo2.write(30);
    delay(200);
    servo3.write(90);
    delay(200);
    servo5.write(115);
    delay(200);
  }
  else if(d>9 && d<=12)
  {
    Serial.println("d>9 && d<=12");
    servo2.write(40);
    delay(200);
    servo3.write(100);
    delay(200);
    servo5.write(120);
    delay(200);
  }
  else if(d>12 && d<=15)
  {
    Serial.println("d>12 && d<=15");
    servo2.write(50);
    delay(200);
    servo3.write(110);
    delay(200);
    servo5.write(125);
    delay(200);
  }
  else if(d>15 && d<=18)
  {
    Serial.println("d>15 && d<=18");
    servo2.write(60);
    delay(200);
    servo3.write(120);
    delay(200);
    servo5.write(130);
    delay(200);
  }*/
}
/*
void setup() {
  Serial.begin(9600);
  pinMode(pingPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo1.attach(3);  
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}

void loop() {
  servo1.write(0);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  for (pos = 0; pos <= 180; pos += 1) { 
    servo1.write(pos);     
    ultrasonic();         
    delay(100);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    servo1.write(pos); 
    ultrasonic();               
    delay(100);                       
  }
}
*/
