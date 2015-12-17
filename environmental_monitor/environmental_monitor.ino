int moisturesensorvalue = 0;
int moisturethreshhold = 200;
int moisturesensorpin = A0;
int valvepin = 8;
void setup() {
  pinMode(valvepin, OUTPUT);
  pinMode(moisturesensorpin, INPUT);
  Serial.begin(250000);
  Serial.println("Sensor is ready.");
}

void loop() {
  moisturesensorvalue = analogRead(moisturesensorpin);
  Serial.println(moisturesensorvalue);
  if (moisturesensorvalue < moisturethreshhold) {
    digitalWrite(valvepin, HIGH);
    delay(2000);
    digitalWrite(valvepin, LOW);
  }
  else {
    delay(1000);
  }
  //store moisteture sensor value.
  //is moister sensor value below threshhold?
  //  no: do nothoing.
  //  yes: start watering until moister gets above threshhold.

}
