
// created thursday 26/05/2021 12:23 by moh

#include <LiquidCrystal.h>
int timerMode = 0;
long startTime;
long pauseTime;
long secondStart;
void setup() {
  // Setup the LCD 
  lcd.begin(16,2);
  lcd.clear;
  lcd.print("Press tostart");
  

}

void loop() {
  lcd.setCursor(0,1);
  if () { // *********** if the start button is pressed ********
  while  () {  // while the pause button is not pressed   (***** to complete ****)
    startTime = millis(); // Save the time when the button is pressed
    timerMode++ ;
    delay(400);
    
  
  if (timerMode == 1) {
    lcd.setCursor(0,1);
    lcd.print((millis() - startTime) / 1000.0); // load the time
    }
  }
    pauseTime = millis() - startTime;
    lcd.setCursor(0,1);
    lcd.print((millis() - startTime) / 1000.0); // the screen will keep showing the time when the pause button is pressed
    
  }
  if (timerMode > 1 ) {
    secondStart = millis();
    lcd.setCursor(0,1);
    lcd.print((millis() - secondStart + pauseTime ) / 1000.0);
    }
  if () { // if the "Reset" button is pressed
    startTime = millis();
    TimerMode = 1;
    }
}
