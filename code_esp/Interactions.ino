/*
void annul() {
  if (key != 'A') return;
  pad = "";
  padIndex = 0;
  lcd.setCursor(0, 1);
  lcd.println("                 ");
}

void verif() {
  if (key != 'B' && key!= 'E') return;  //E KEY = DEBUG MODE
    
  if (code == pad || key == 'E') {
    motor.write(0);
    Correct_Screen();
    delay(delayMs);
    code = " ";
    default_Screen();
    pad = "";
    padIndex = 0;
  }
  else {

    Incorrect_Screen();
    delay(delayMs);
    default_Screen();
    pad = "";
    padIndex = 0;

  }

}

void backspace() {
  
  if (key != 'F') return;

  if  (padIndex > 0) {

  padIndex--;
  pad.remove(padIndex, 1); 
  lcd.setCursor(6, 1);
  lcd.print("               ");
  lcd.setCursor(6, 1);
  lcd.print(pad);

  }
}
*/
// Interactions.ino

void addChar() {
  pad += key;
  padIndex++;
  lcd.setCursor(6, 0);
  lcd.print(pad);
}

void backspace() {
  if (padIndex > 0) {
    padIndex--;
    pad.remove(padIndex, 1);
    lcd.setCursor(6, 0);
    lcd.print("          ");
    lcd.setCursor(6, 0);
    lcd.print(pad);
  }
}

void verif() {
  if (key != 'B' && key!= 'E') return;  //E KEY = DEBUG MODE
    
  if (code == pad || key == 'E') {
    motor.write(0);
    Correct_Screen();
    delay(delayMs);
    code = " ";
    default_Screen();
    pad = "";
    padIndex = 0;
  }
  else {

    Incorrect_Screen();
    delay(delayMs);
    default_Screen();
    pad = "";
    padIndex = 0;

  }
}
void handleKeys() {
      if (!key) {
        start_Screen();
        key = 0;
      }

      if (key && screen == 0) {
        default_Screen();
        key = 0;
      }
      if (key == 'A') {
        unlock_Screen();
        key = 0;
      }
        else if (key == 'B') {
          lock_Screen();
          key = 0;
      }

      unlock_Screen();
      key = 0;
      if (key != 'B' && key!= 'E') return;  //E KEY = DEBUG MODE
      if (code == pad || key == 'E') {
        motor.write(0);
        Correct_Screen();
        delay(delayMs);
        code = " ";
        default_Screen();
        pad = "";
        padIndex = 0;
   }
      else {

      Incorrect_Screen();
      delay(2000);
      default_Screen();
      pad = "";
      padIndex = 0;
  }
}