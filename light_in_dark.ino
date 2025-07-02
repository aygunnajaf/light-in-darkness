int sensorPin = A0;     
int ledPin = 9;         

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(sensorPin);
  Serial.println(lightLevel);  
  if (lightLevel < 500) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);  
  }
  delay(100);
}