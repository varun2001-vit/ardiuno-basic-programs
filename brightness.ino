int switchpin=8;
int ledpin=11;
boolean lastbutton=LOW;
int level=0;
boolean current;
boolean currentbutton=FALSE;
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
  {level=level+51;
  }
  lastbutton=currentbutton;
if(level>255)
level=0;
analogWrite(ledpin,level);
}

} 