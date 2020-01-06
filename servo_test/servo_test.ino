// Include the Servo library 
#include <Servo.h> 

// Declare the Servo pin 
int servoPinX = 6; 
int servoPinY = 7; 
// Create a servo object 
Servo ServoX, ServoY;

void setup() { 
   // We need to attach the servo to the used pin number 
   ServoX.attach(servoPinX); 
   ServoY.attach(servoPinY); 

   ServoX.write(0); 
   ServoY.write(0); 
}

void rotate(int x, int y){
   ServoX.write(x); 
   ServoY.write(y);
}

void loop(){ 
   rotate(0, 0);
   delay(1000); 
}
