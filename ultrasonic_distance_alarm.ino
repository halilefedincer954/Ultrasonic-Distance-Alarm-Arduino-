#include <NewPing.h>

// -------------------- Pin Definitions --------------------
#define TRIGGER_PIN  11   // Trigger pin of HC-SR04
#define ECHO_PIN     10   // Echo pin of HC-SR04
#define MAX_DISTANCE 100  // Maximum distance to measure (cm)

#define LED_PIN     2     // LED output pin
#define BUZZER_PIN  7     // Buzzer output pin

// -------------------- NewPing Object --------------------
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

// -------------------- Setup --------------------
void setup() {
  Serial.begin(9600);           // Start Serial Monitor
  pinMode(LED_PIN, OUTPUT);     // Set LED as output
  pinMode(BUZZER_PIN, OUTPUT);  // Set buzzer as output
}

// -------------------- Main Loop --------------------
void loop() {

  // Measure distance in centimeters
  int distance = sonar.ping_cm();

  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Distance-based warning system
  if (distance > 0 && distance <= 10) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    delay(50);
  }
  else if (distance <= 30) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    delay(250);
  }
  else if (distance <= 50) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
  }
  else if (distance > 50) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(50); // Small delay for sensor stability
}
