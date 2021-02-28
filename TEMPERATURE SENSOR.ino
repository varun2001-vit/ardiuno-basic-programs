#include<wire.h>
int temp_adress=72;

void setup()
{
  Serial.begin(9600);
  Wire.begin();
    
}

void loop()
{//start talking
  Wire.beginTransmission(temp_adress);
  //first value
  Wire.send(0);
  Wire.endTransmission();
  Wire.requestFrom(temp_adress,1);
  while(Wire.available()==0);
  int c=Wire.receive();
  Serial.print(c);
  Serial.print('C');
}