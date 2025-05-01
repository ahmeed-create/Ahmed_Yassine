#include <Servo.h>

const int trigPin = 10;
const int echoPin = 11;
Servo myServo;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(12);
}

void loop() {
  // Mouvement aller (15° à 165°)
  for (int angle = 15; angle <= 165; angle++) {
    myServo.write(angle);
    delay(1); // Contrôle la vitesse du servo
    distance = calculateDistance(); // Mesure la distance
    sendData(angle, distance);      // Envoie les données via le port série
  }

  // Mouvement retour (165° à 15°)
  for (int angle = 165; angle >= 15; angle--) {
    myServo.write(angle);
    delay(1); // Contrôle la vitesse du servo
    distance = calculateDistance(); // Mesure la distance
    sendData(angle, distance);      // Envoie les données via le port série
  }
}

// Fonction pour calculer la distance avec un timeout court
int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Limiter le délai de `pulseIn()` à 200 ms pour éviter les blocages
  duration = pulseIn(echoPin, HIGH, 200000);
  if (duration == 0) {
    return -1; // Aucun objet détecté
  }

  // Calculer la distance en cm
  return duration * 0.034 / 2;
}

// Fonction pour envoyer les données via le port série
void sendData(int angle, int distance) {
  Serial.print(angle);
  Serial.print(",");
  if (distance == -1) {
    Serial.print("Out of range");
  } else {
    Serial.print(distance);
  }
  Serial.println(".");
}
