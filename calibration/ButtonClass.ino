void doubleclick() {  // what happens when button is double-clicked
int c = czr.CO2();
ScreenConfigtextco2(2, 2000, "2 Click", c / 1000, "%");
}
void singleclick() {  // what happens when the button is clicked
int c = czr.CO2();
ScreenConfigtextco2(2, 2000, "1 Click", c / 1000, "%");
}
void longclick() {  // what happens when buton is long-pressed
int c = czr.CO2();
ScreenConfigtextco2(2, 2000, "Long Click", c / 1000, "%");
}