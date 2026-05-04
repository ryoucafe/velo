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
  // No key: only show start screen if not already shown
  if (!key) {
    if (screen != 0) start_Screen();
    return;
  }

  // From start screen, any key moves to default menu
  if (screen == 0) {
    default_Screen();
    key = 0;
    return;
  }

  // A: always act as "back/enter menu"
  if (key == 'A') {
    default_Screen();
    key = 0;
    return;
  }

  // B: context-sensitive: on menus it's "go to lock"; on code entry it's "validate"
  if (key == 'B') {
    if (screen == 1) {
      lock_Screen();
      key = 0;
      return;
    }
    // otherwise treat as validation
    verif();
    key = 0;
    return;
  }

  // C: generate password (if implemented)
  if (key == 'C') {
    passwordGen();
    key = 0;
    return;
  }

  // F: backspace during code entry
  if (key == 'F') {
    backspace();
    key = 0;
    return;
  }

  // Numeric keys: add to current pad only when on a code-entry screen
  if (key >= '0' && key <= '9') {
    if (screen == 2 || screen == 3) addChar();
    key = 0;
    return;
  }

  // Unhandled keys: consume
  key = 0;
}