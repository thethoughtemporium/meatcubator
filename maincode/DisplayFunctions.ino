void ScreenConfigco2lvl(int size, int ontime, float Print, char Println) {  // Used for (Values + Symbol display) for example (10%)
  display.clearDisplay();                                                   //After Display is cleared it needs to be reconfigured, before sending something else to it.
  display.setTextSize(size);                                                // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);                                      // Draw white text
  display.setCursor(5, 0);
  display.print(Print);
  display.print(Println);
  display.display();
  delay(ontime);
  display.clearDisplay();
}
void ScreenConfig(int size, int ontime, char *Print, char *Println) {  // Used for (Char + Char) on 2 different lines for example Line 1 (Hello) Line 2 (There)
  display.clearDisplay();                                              //After Display is cleared it needs to be reconfigured, before sending something else to it.
  display.setTextSize(size);                                           // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);                                 // Draw white text
  display.setCursor(0, 0);
  display.println(Print);
  display.println(Println);
  display.display();
  delay(ontime);
  display.clearDisplay();
}
void ScreenConfigco2text(int size, int ontime, float Print, char *Println) {  // Used for (Values + Char ) for example (10 Dogs)
  display.clearDisplay();                                                     //After Display is cleared it needs to be reconfigured, before sending something else to it.
  display.setTextSize(size);                                                  // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);                                        // Draw white text
  display.setCursor(5, 0);
  display.print(Print);
  display.println(Println);
  display.display();
  delay(ontime);
  display.clearDisplay();
}
void ScreenConfigtextco2(int size, int ontime, char *Print, float Println, char *Print1) {  // Used for (Char + Symbol + Char) on 2 different lines for example Line 1 (Hello @) Line 2 (There)
  display.clearDisplay();                                                                   //After Display is cleared it needs to be reconfigured, before sending something else to it.
  display.setTextSize(size);                                                                // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);                                                      // Draw white text
  display.setCursor(0, 0);
  display.println(Print);
  display.print(Println);
  display.println(Print1);
  display.display();
  delay(ontime);
  display.clearDisplay();
}
void ScreenConfigtextco2nodelay(int size, int ontime, char *Print, int Delayvalue, char Time, float Println, char *Print1) {  // Used for custom delays (Time + Symbol + Char) on 2 different lines for example Line 1 (Wait) Line 2 (2 Seconds)
  float c = czr.CO2();
  display.clearDisplay();               //After Display is cleared it needs to be reconfigured, before sending something else to it.
  display.setTextSize(size);            // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);  // Draw white text
  display.setCursor(0, 0);
  display.print(Print);
  display.print(Delayvalue);
  display.println(Time);
  display.print(Println);
  display.println(Print1);
  display.display();
  delay(ontime);
}
