int potPin=0;
void Setup()
{ 
Serial.begin(9600);
}
void loop()
{int val=map(analogRead(portPin),0,1023,0,255);
Serial.printlin(val);
delay(50);
}