
//calling libraries
#include <Keypad.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include <ESP32Servo.h>

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

byte rowPins[ROWS] = {14, 13, 15, 16}; // ESP32 pins connected to keypad ROW wires
byte colPins[COLS] = {32, 33, 25, 26}; // ESP32 pins connected to keypad COL wires

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


char key;
String code = " ";
String pad;
int padIndex;
int screen = 0;

int delayMs = 1000;
byte nchar = 6;

unsigned long lastActivity = 0;
const unsigned long idleTimeout = 10000UL; // 10 seconds

//code begin

void setup() {

  Wire.begin(21, 22); 
  
  //screen setup
  lcd.init();
  lcd.clear();
  lcd.backlight();
  //default_Screen();
  pad = "";
  padIndex = 0;

  //servomotor setup
  motor.setPeriodHertz(50);
  motor.attach(23, 500, 2400);
  motor.write(0);

  //serial setup
  Serial.begin(9600);

  //random setup
  randomSeed(analogRead(34));

  lastActivity = millis();
}

void loop() {
  key = keypad.getKey(); 
  if (key) lastActivity = millis();

  //passwordGen();
  keyP();
  //verif();
  //annul();
  //backspace();
  handleKeys();

  if (millis() - lastActivity > idleTimeout && screen != 0) {
  start_Screen();
  pad = "";
  padIndex = 0;
  key = 0;
  lastActivity = millis(); // avoid repeating the timeout immediately
}
}





