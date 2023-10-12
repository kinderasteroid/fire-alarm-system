// C++ code


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);

}

void loop()
{
 int temp = analogRead(0);
  temp = temp * 0.48828125;
  if(temp>80)
  {
  digitalWrite(4, HIGH);
     tone(4, 1000); // Activate the buzzer at 1000Hz
    delay(100); // Sound for 1 second
    noTone(4);
    delay(100);
  }
  else{
      digitalWrite(4, LOW);
  delay(1000);
  }
  }

