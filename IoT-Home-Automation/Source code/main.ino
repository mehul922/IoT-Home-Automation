#define PIR 4
#define RELAY 5

void setup() {
  pinMode(PIR, INPUT);
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(PIR);

  if(motion == HIGH) {
    digitalWrite(RELAY, HIGH);
    Serial.println("Light ON");
  }
  else {
    digitalWrite(RELAY, LOW);
    Serial.println("Light OFF");
  }

  delay(1000);
}