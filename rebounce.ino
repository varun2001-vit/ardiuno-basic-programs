int switchpin=8;
int ledpin=13;
boolean lastbutton=LOW;
boolean lastled=FALSE;
boolean current;
boolean currentbutton;
boolean debounce(boolean last)
{
  boolean current=digitalRead(switchpin);
  if (last!=current)
  {
    delay(5);
    current=digitalRead(switchpin);
  }
  return current;
}
void setup()
{
  pinMode(switchpin,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  currentbutton=debounce(lastbutton);
  if(currentbutton==HIGH && lastbutton=LOW)
  {lastled=!lastled;
  }
  lastbutton=currentbutton;
  digitalWrite(ledpin,lastled);
}

} 