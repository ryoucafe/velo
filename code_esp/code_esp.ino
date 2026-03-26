
//calling libraries
#include <Keypad.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include <Servo.h>

//defining pins
#define buzzer 11

//special parameters
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo motor;

//keypad settings

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
    {'1','2','3','F'},
    {'4','5','6','E'},
    {'7','8','9','D'},
    {'A','0','B','C'}
};

byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

char key;
String code = " ";
String pad;
int index;

int time = 1000;
byte nchar = 4;

//code begin

void setup() {
  //input definitions
  pinMode(buzzer, OUTPUT);

  //screen setup
  lcd.init();
  lcd.clear();
  lcd.backlight();
  default_Screen();

  //servomotor setup
  motor.attach(12);

  //serial setup
  Serial.begin(9600);

  //random setup
  randomSeed(analogRead(0));
  motor.write(0);
}

void loop() {
  passwordGen();
  keyP();
  verif();
  annul();
  backspace();
}