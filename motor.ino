void setup()
{pinMode(motorPin,OUTPUT);
}
void loop()
{ for(int i=0;i<=255;i++)
{analogWrite(motorPin,i);
delay(1);
}
delay(1000);
for(int i=255;i>=0;i--)
{analogWrite(motorPin,i):
}
}