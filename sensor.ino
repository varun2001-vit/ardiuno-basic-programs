int sense=0;
void setup()
{ analogReference(DEFAULT);
Serial.begin(9600);
}
void loop()
{Serial.println(analogRead(sense));
delay(1000);
} 
