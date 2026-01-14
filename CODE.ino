
#include <Servo.h>
#include <Adafruit_LiquidCrystal.h>

// Servo
Servo myServo;

// Pins
int pirPin = 6;      // PIR sensor output
int ledPin = 5;      // LED
int buzzerPin = 4;   // Buzzer

// LCD
Adafruit_LiquidCrystal lcd_1(0);

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  myServo.attach(9);
  myServo.write(90); // RUN

  lcd_1.begin(16, 2);

  // ---- Checking... OK ----
  lcd_1.clear();
  lcd_1.print("Checking...");
  delay(2000);
  lcd_1.setCursor(0, 1);
  lcd_1.print("OK");
  delay(2000);

  lcd_1.clear();
  lcd_1.print("TCAS System");
}

void loop() {
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    // Object detected
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    myServo.write(0);  // STOP

    lcd_1.clear();
    lcd_1.print("!!! WARNING !!!");
    lcd_1.setCursor(0, 1);
    lcd_1.print("Object Detected");
  } 
  else {
    // No object
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    myServo.write(90); // RUN

    lcd_1.clear();
    lcd_1.print("TCAS System");
  }

  delay(400);
}
