#define MOISTURE_SENSOR A1
 
float sensorValue=0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  for (int i=0;i<=100;i++){
    sensorValue += analogRead(MOISTURE_SENSOR);
    delay(1);
  }
  sensorValue /= 100.0;
  Serial.println(sensorValue);
  delay(1000);
}
