#include<Servo.h>
Servo motor;
int servopin=9;
void setup()
{motor.attach(servopin);
}
void loop()
{
for (int i=0;i<=180;i=i+20)
{
motor.Write(i);
}
}