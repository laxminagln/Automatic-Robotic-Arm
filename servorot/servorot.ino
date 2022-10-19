#include <Servo.h> //Servo library                                       // adding the servo library
Servo servo1, servo2, servo3, servo4, servo5, servo6;       // declaring servo variables
int pos = 0;                                                // declaring initial position

void setup() {   //setup function                                           // setup function
  servo1.attach(3);                                         // attaching servo pins to arduino pins
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}


void loop() {    //loop function                                           // loop function
  servo1.write(0);                                          // writing servo positions
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  
  for (pos = 0; pos <= 180; pos += 5) {                     // defining rotation of servo
    servo1.write(pos);             
    delay(1000);                       
  }
  
  for (pos = 0; pos <= 90; pos += 5) { 
    servo2.write(pos);             
    delay(1000);                       
  }
  
  for (pos = 180; pos >=90; pos -= 5) { 
    servo3.write(pos);                
    delay(1000);                       
  }
  
  for (pos = 0; pos <= 90; pos += 5) { 
    servo4.write(pos);             
    delay(1000);                       
  }
  
  for (pos = 180; pos >=90; pos -= 5) { 
    servo5.write(pos);                
    delay(1000);                       
  }
  
   for (pos = 0; pos <= 180; pos += 5) { 
    servo6.write(pos);             
    delay(1000);                       
  }
  
  for (pos = 180; pos >= 0; pos -= 5) { 
    servo1.write(pos);                
    delay(1000);                       
  }

  for (pos = 90; pos >= 0; pos -= 5) { 
    servo2.write(pos);                
    delay(1000);                       
  }

  for (pos = 90; pos <= 180; pos += 5) { 
    servo3.write(pos);             
    delay(1000);                       
  }

  for (pos = 90; pos >= 0; pos -= 5) { 
    servo4.write(pos);                
    delay(1000);                       
  }

  for (pos = 90; pos <= 180; pos += 5) { 
    servo5.write(pos);             
    delay(1000);                       
  }

  for (pos = 180; pos >=0; pos -= 5) { 
    servo6.write(pos);                
    delay(1000);                       
  }
}
