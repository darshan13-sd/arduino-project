// C++ code
//
const byte PING_PIN = 7;   // SIG pin
void setup() {
  Serial.begin(9600);
}
void loop() {
  // Trigger: send a short HIGH pulse on the SIG pin
  pinMode(PING_PIN, OUTPUT);
  digitalWrite(PING_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(PING_PIN, HIGH);
  delayMicroseconds(5);
  digitalWrite(PING_PIN, LOW);
  pinMode(PING_PIN, INPUT);
  long duration = pulseIn(PING_PIN, HIGH);
  float distance_cm = duration / 58.0;//  // Speed of sound ≈ 343 m/s → ~58 µs per cm round trip, ~148 µs per inch
  float distance_in = duration / 148.0;

    Serial.print("Distance: ");
    Serial.print(distance_cm, 1);
    Serial.print(" cm  (");
    Serial.print(distance_in, 2);
    Serial.println(" in)");

  delay(100);
}