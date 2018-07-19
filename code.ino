#define pin_Red 10
#define pin_Button 6

int val=0;
int LEDvalue;
void setup()
{
  pinMode(pin_Red, OUTPUT);
  pinMode(pin_Button, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  val = digitalRead(pin_Button);
  
  if (val == HIGH) {         
  digitalWrite(pin_Red, LOW); 
  LEDvalue=0;
  }
  
  else {
    digitalWrite(pin_Red, HIGH);
    LEDvalue=255;
  }
  Serial.println(LEDvalue);
  delay(500);
}
