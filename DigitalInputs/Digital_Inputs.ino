//www.elegoo.com
//2016.12.08

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;
bool on = false;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  // Single button set up is here.
  // if (digitalRead(buttonApin) == LOW) {
  //   on = !on;
  // }

  // if (on) {
  //   digitalWrite(ledPin, HIGH);
  // } else {
  //   digitalWrite(ledPin, LOW);
  // }

  // Two button set up here.
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
