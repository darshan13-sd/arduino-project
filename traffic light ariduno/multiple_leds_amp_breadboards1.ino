// C++ code
//
int buttonState = 0;
const int buttonPin=2;
int ledOne= 13;
int ledTwo= 12;
int ledThree= 8;
void setup()
{
  pinMode(ledOne, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if(buttonState==1)
  {
  digitalWrite(ledOne, HIGH);
  Serial.print("stop\n");
  delay(2000); // Wait for traffic light millisecond(s)
  digitalWrite(ledOne, LOW);
  delay(500); // Wait for traffic light millisecond(s)
  digitalWrite(12, HIGH);
  Serial.print("getready\n");
  delay(2000); // Wait for traffic light millisecond(s)
  digitalWrite(12, LOW);
  delay(500); // Wait for traffic light millisecond(s)
  digitalWrite(8, HIGH);
  Serial.print("go\n");
  delay(2000); // Wait for traffic light millisecond(s)
  digitalWrite(8, LOW);
  }
}