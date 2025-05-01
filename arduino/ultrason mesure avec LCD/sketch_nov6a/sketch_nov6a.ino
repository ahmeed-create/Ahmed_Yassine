
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 columns and 2 rows

int trigPin = 10;    // TRIG pin
int echoPin = 11;    // ECHO pin

float duration_us, distance_cm;

void setup() {
  lcd.init();               // initialize the lcd
  lcd.backlight();          // turn on the backlight 
  pinMode(trigPin, OUTPUT); // set trigger pin to output mode
  pinMode(echoPin, INPUT);  // set echo pin to input mode

  Serial.begin(9600);       // initialize Serial Monitor at 9600 baud
  Serial.println("Ultrasonic Distance Measurement Started");
}

void loop() {
  // generate a 10-microsecond pulse to the TRIG pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // measure the duration of the pulse from the ECHO pin with a 60 ms timeout
  duration_us = pulseIn(echoPin, HIGH, 60000);

  // calculate the distance, if duration is within a reasonable range
  if (duration_us > 0) {  // only calculate if a valid pulse duration is received
    distance_cm = 0.017 * duration_us;

    // Display on LCD
    lcd.clear();
    lcd.setCursor(0, 0); // start to print at the first row
    lcd.print("Distance: ");
    lcd.print(distance_cm);
    lcd.print(" cm");

    // Display on Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.println(" cm");

  } else {
    // Display "Out of range" on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Out of range");

    // Display "Out of range" on Serial Monitor
    Serial.println("Out of range");
  }

  delay(500); // wait for 500 milliseconds before the next measurement
}
