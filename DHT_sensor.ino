
#include <DHT.h>
#define dataPin 4
#define DHTTYPE DHT11

DHT dht(dataPin, DHTTYPE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("\nTemperature: ");
  Serial.print(temp);
  Serial.print("\nHumidity: ");
  Serial.print(humidity);
  delay(1000);
}
