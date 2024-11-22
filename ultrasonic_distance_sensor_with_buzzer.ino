// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
int buzzer = 7;
// defines variables
long duration;
int distance;
void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  if (distance > 5) {
    for (int i = 0; i < 10; i++) {
      tone(buzzer, 2000 * rand(), 200);
      delay(100);
    }

  }
  else {
    noTone(buzzer);
  }
  delay(500);

  Serial.print("Distance: ");
  Serial.println(distance);
}
