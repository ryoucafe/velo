void start_Screen() {
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Bienvenue");
  screen = 0;  
}

void default_Screen() {
  lcd.clear();
  lcd.print("A. Deverouiller");
  lcd.setCursor(0, 1);
  lcd.print("B. Verouiller");
  screen = 1;
}

void unlock_Screen() {
  lcd.clear();
  lcd.print("Code:");
  lcd.setCursor(0, 1);
  lcd.print("B. Valider");
  screen = 2;
}

void lock_Screen() {
  lcd.clear();
  lcd.print("Code:");
  lcd.setCursor(6, 0);
  lcd.setCursor(0, 1);
  lcd.print("A. Retour Menu");
  screen = 3;
}

void Correct_Screen() {
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Code Bon");
  lcd.setCursor(1, 1);
  lcd.print("Bonne Journee");
  screen = 4;
}

void Incorrect_Screen() {
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Code Errone");
  lcd.setCursor(0, 1);
  lcd.print("Oubli:0612345678");
  screen = 5;
}