// Include the Servo library 
#include <Servo.h> 

// Declare the Servo pin 
int servoPinY = 6; 
int servoPinZ = 7; 
// Create a servo object 
Servo ServoY, ServoZ;

void setup() { 
   // We need to attach the servo to the used pin number 
   ServoY.attach(servoPinX); 
   ServoZ.attach(servoPinY); 

   ServoY.write(0); 
   ServoZ.write(0); 
}

void rotate(int y, int z){
   ServoY.write(y); 
   ServoZ.write(z);
}

void loop(){ 
   rotate(0, 0);
   delay(1000); 
}
