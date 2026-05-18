#define IR_SENSOR 4
#define LED_PIN 8
#define BUZZER_PIN 6

void setup() {

  Serial.begin(115200);

  pinMode(IR_SENSOR, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, HIGH);
}

void loop() {

  int sensor = digitalRead(IR_SENSOR);

  if (sensor == LOW) {

    Serial.println("OBJECT DETECTED");

    digitalWrite(LED_PIN, HIGH);

    digitalWrite(BUZZER_PIN, LOW);

  } 
  else {

    Serial.println("NO OBJECT");

    digitalWrite(LED_PIN, LOW);

    digitalWrite(BUZZER_PIN, HIGH);
  }
  
  delay(500);
} 