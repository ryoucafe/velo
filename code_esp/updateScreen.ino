/*void default_Screen() {

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Code: ");
  lcd.setCursor(6, 0);
  lcd.print(code);

}

void Incorrect_Screen() {

  lcd.clear();
  lcd.setCursor(6, 0);
  lcd.print("Code");
  lcd.setCursor(4, 1);
  lcd.print("Invalide");
  delay(1500);

}

void Correct_Screen() {

  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Code Bon");
  
}
*/

void default_Screen() {

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenu");
  delay(1000);
  lcd.clear();
  lcd.print("A. Deverouiller");
  lcd.setCursor(0, 1);
  lcd.print("B. Verouiller");

}

void Incorrect_Screen() {

  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Code Erroné");
  lcd.setCursor(0, 1);
  lcd.print("Oubli:0612345678");
  delay(1500);

}

void Correct_Screen() {
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Code Bon");
  lcd.setCursor(2, 0);
  lcd.print("Bonne Journée");
}