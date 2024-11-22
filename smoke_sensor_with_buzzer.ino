
#include<DHT.h>
#include<math.h>

int smokeA1 = A1;
int buzzer = 8;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(smokeA1);
  
  Serial.print("Analog output: ");
  Serial.println(analogValue);
  if (analogValue > 1) {
    for (int i = 0; i < 10; i++) {
      tone(buzzer, 1000 * rand(), 200);
      delay(100);
    }

  }
  else {
    noTone(buzzer);
  }
  delay(1000);
}


