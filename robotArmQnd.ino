#include <AFMotor.h>

AF_DCMotor motor1(1);  // Instantiate all the motors
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
int command;

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Robot arm test!");
  motor1.setSpeed(100);     // set the speed to 255/255
  motor2.setSpeed(100);     // do the same for the others...
  motor3.setSpeed(100);    
  motor4.setSpeed(100);
}

void loop()
{
    int commamnd = 0;
    if (Serial.available() > 0) 
         {   
        // read the incoming byte:
        command = Serial.read();

                if(command > 48 && command < 57)
                {
                
                  /*
  *  4 motors
  *  1 through 8 used
  */
  if(command == 49)
  {
    
    motor1.setSpeed(100);     // set the speed to 255
    motor1.run(FORWARD);  
    delay (400);
    motor1.setSpeed(0);       // turn off motor
  }
  else if(command == 50)
  {
    motor1.setSpeed(100);     // set the speed to 255
    motor1.run(BACKWARD);  
    delay (400);
    motor1.setSpeed(0);       // turn off motor
  }
  else if(command == 51)
  {
    motor2.setSpeed(100);     // set the speed to 255
    motor2.run(FORWARD);  
    delay (400);
    motor2.setSpeed(0);       // turn off motor
  }
  else if(command == 52)
  {
    motor2.setSpeed(100);     // set the speed to 255
    motor2.run(BACKWARD);  
    delay (400);
    motor2.setSpeed(0);       // turn off motor
  }
  else if(command == 53)
  {
    motor3.setSpeed(100);     // set the speed to 255
    motor3.run(FORWARD);  
    delay (400);
    motor3.setSpeed(0);       // turn off motor
  }
  else if(command == 54)
  {
    motor3.setSpeed(100);     // set the speed to 255
    motor3.run(BACKWARD);  
    delay (400);
    motor3.setSpeed(0);       // turn off motor
  }
  else if(command == 55)
  {
    motor4.setSpeed(100);     // set the speed to 255
    motor4.run(FORWARD);  
    delay (400);
    motor4.setSpeed(0);       // turn off motor
  }
  else if(command == 56)
  {
    motor4.setSpeed(100);     // set the speed to 255
    motor4.run(BACKWARD);  
    delay (400);
    motor4.setSpeed(0);       // turn off motor
  }
  else if(command == 57)
  {
    motor1.setSpeed(0);
    motor2.setSpeed(0);
    motor3.setSpeed(0);
    motor4.setSpeed(0);
  }
   
 
                } //
              
                
        // say what you got:
        Serial.print("I received: ");
        Serial.println(command, DEC);
                Serial.println(command);
    }
}
