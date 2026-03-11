#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int bouton = 2;
byte colonne = 0;
Servo servoMotor;

void setup() {
  //I2C et bouton
  pinMode(bouton, INPUT_PULLUP);

  lcd.init();  // initialize the lcd
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("Saisir code:");
  //Servomoteur
  servoMotor.attach(10); // Indiquez la broche à laquelle le servo est connecté (ici : broche 10)
  Wire.begin();    
    Serial.begin(9600);
}

void loop() {
  //I2C et bouton
  if (digitalRead(bouton) == LOW) {
    lcd.setCursor(colonne, 1);
    lcd.print("1");
    colonne++;
    delay(300);
  }
  //Servomoteur
    if (digitalRead(bouton) == LOW) {
      servoMotor.write(90); // Envoyez le servo à la position de 90 degré
      delay(300);
    }
    else {
      servoMotor.write(0); // Envoyez le servo à la position de 0 degré
    }
  
}
