/* 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
#define bCode A0
#define num0 2
#define num1 3
#define num2 4
#define num3 5
#define num4 6
#define num5 7
#define num6 8

LiquidCrystal_I2C lcd(0x27, 16, 2);
byte colonne = 0;
Servo servoMotor;

void setup() {
  //I2C et bouton
  pinMode(bCode, INPUT_PULLUP);
  pinMode(num0, INPUT_PULLUP);
  pinMode(num1, INPUT_PULLUP);
  pinMode(num2, INPUT_PULLUP);
  pinMode(num3, INPUT_PULLUP);
  pinMode(num4, INPUT_PULLUP);
  pinMode(num5, INPUT_PULLUP);
  pinMode(num6, INPUT_PULLUP);
  pinMode(num7, INPUT_PULLUP);
  pinMode(num8, INPUT_PULLUP);
  pinMode(num9, INPUT_PULLUP);

  lcd.init();  // initialize the lcd
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("Saisir code:");
  //Servomoteur
  servoMotor.attach(12); // Indiquez la broche à laquelle le servo est connecté (ici : broche 10)
  Wire.begin();    
    Serial.begin(9600);
}

void loop() {
  //I2C et bouton
  if (digitalRead(num0) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("0");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num1) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("1");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num2) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("2");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num3) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("3");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num4) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("4");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num5) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("5");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num6) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("6");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num7) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("7");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num8) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("8");
    colonne++;
    delay(2000);
  }
  if (digitalRead(num9) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("9");
    colonne++;
    delay(2000);
  }
  //Servomoteur
    if (digitalRead(bCode) == LOW) {
      servoMotor.write(90); // Envoyez le servo à la position de 90 degré
      delay(300);
    }
    else {
      servoMotor.write(0); // Envoyez le servo à la position de 0 degré
    }
  
}
*/