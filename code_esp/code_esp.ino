
//calling libraries
#include <Keypad.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include <Servo.h>

//defining pins
#define codeBtn 10

//special parameters
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo motor;

void setup() {
  //input definitions
  pinMode(codeBtn, INPUT_PULLUP);

  //screen setup
  lcd.clear();
  lcd.init();
  lcd.backlight();
  lcd.print("Code: ");
  lcd.setCursor(7, 0);

  //servomotor setup
  motor.attach(11);

  //serial setup
  Serial.begin(9600);

  //random setup
  randomSeed(analogRead(0));
}

void loop() {
  passwordGen();
}
