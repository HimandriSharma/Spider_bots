#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  100
#define SERVOMAX  600
void setup() {
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60);
  //delay(10);
}
void turn_right()
{
  pwm.setPWM(4, 0, 100);
  delay(1000);
  pwm.setPWM(7, 0, 600);
  delay(1000);
  pwm.setPWM(4, 0, 600);
  delay(2000);
  /***********/
  pwm.setPWM(5, 0, 100);
  delay(1000);
  pwm.setPWM(6, 0, 600);
  delay(1000);
  pwm.setPWM(5, 0, 600);
  delay(2000);

}

void try_turn1()
{
  pwm.setPWM(1, 0, 100);
  delay(250);
  pwm.setPWM(0, 0, 300);
  delay(250);
  pwm.setPWM(1, 0, 600);
  delay(250);
  pwm.setPWM(3, 0, 500);
  pwm.setPWM(7, 0, 300);
  //pwm.setPWM(6, 0, 300);
  pwm.setPWM(4, 0, 600);
  pwm.setPWM(5, 0, 600);
  
  
  pwm.setPWM(2, 0, 600);
  delay(250);
  pwm.setPWM(2, 0, 100);
  delay(250);
  pwm.setPWM(3, 0, 200);
  delay(250);
  pwm.setPWM(2, 0, 600);
  delay(250);
  pwm.setPWM(4, 0, 100);
  delay(250);
  pwm.setPWM(7, 0, 100);
  delay(250);
  pwm.setPWM(4, 0, 600);
  delay(250);
  pwm.setPWM(7, 0, 300);
  //delay(1000);
  delay(250);
  pwm.setPWM(3, 0, 500);
  delay(250);
  pwm.setPWM(0, 0, 600);
  delay(250);
  /* pwm.setPWM(1, 0, 100);
    delay(1000);
    pwm.setPWM(0, 0, 100);
    delay(1000);
    pwm.setPWM(1, 0, 600);
    delay(1000);*/

  //delay(1000);
  delay(250);
  pwm.setPWM(1, 0, 100);
  delay(250);
  pwm.setPWM(0, 0, 450);
  delay(250);
  pwm.setPWM(1, 0, 600);
  delay(250);

  pwm.setPWM(5, 0, 100);
  delay(250);
  pwm.setPWM(6, 0, 150);
  delay(250);
  pwm.setPWM(5, 0, 600);
  delay(250);

}

void try_turn2()
{
  pwm.setPWM(4, 0, 600);
 pwm.setPWM(7, 0, 350);
  pwm.setPWM(0, 0, 300);
  pwm.setPWM(2, 0, 600);
  pwm.setPWM(6, 0, 150);
  pwm.setPWM(2, 0, 100);
  delay(1000);
  pwm.setPWM(3, 0, 500);
  delay(1000);
  pwm.setPWM(2, 0, 600);
  delay(1000);
  pwm.setPWM(7, 0, 300);
  pwm.setPWM(5, 0, 600);
  pwm.setPWM(1, 0, 600);
  delay(1000);
  pwm.setPWM(1, 0, 100);
  delay(1000);
  pwm.setPWM(0, 0, 500);
  delay(1000);
  pwm.setPWM(1, 0, 600);
  delay(1000);
  pwm.setPWM(5, 0, 100);
  delay(1000);
  pwm.setPWM(6, 0, 350);
  delay(1000);
  pwm.setPWM(5, 0, 600);
  delay(1000);
  pwm.setPWM(6, 0, 200);
  delay(1000);
  pwm.setPWM(1, 0, 100);
  delay(1000);
  pwm.setPWM(0, 0, 600);
  delay(1000);
  pwm.setPWM(1, 0, 600);
  delay(1000);
  pwm.setPWM(0, 0, 300);
  pwm.setPWM(3, 0, 150);
  delay(1000);
  pwm.setPWM(4, 0, 100);
  delay(1000);
  pwm.setPWM(7, 0, 500);
  delay(1000);
  pwm.setPWM(4, 0, 600);
  delay(1000);
  pwm.setPWM(7, 0, 200);
  delay(1000);
    
}

void loop()
{pwm.setPWM(6, 0, 300);
  /*pwm.setPWM(4, 0, 600);
    pwm.setPWM(5, 0, 600);
    pwm.setPWM(2, 0, 600);
    pwm.setPWM(1, 0, 600);
    pwm.setPWM(3, 0, 300);
    pwm.setPWM(0, 0, 300);
    pwm.setPWM(6, 0, 300);
    pwm.setPWM(7, 0, 300);*/
  delay(500);
  try_turn1();
  //delay(5000);
}
