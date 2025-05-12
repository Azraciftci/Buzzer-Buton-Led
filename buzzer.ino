// C++ code
//
int cad = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == 1) {
    digitalWrite(4, HIGH);
    digitalWrite(12, LOW);
    tone(7, 523, 100); // play tone 60 (C5 = 523 Hz)
    delay(5000); // Wait for 5000 millisecond(s)
  } else {
    digitalWrite(12, HIGH);
    digitalWrite(4, LOW);
  }
}
