#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define CLK 2     
#define DT 3      
#define SW 4      
#define LED_PIN 9 

int counter = 0;
int currentStateCLK;
int lastStateCLK;
unsigned long lastButtonPress = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(CLK, INPUT);
  pinMode(DT, INPUT);
  pinMode(SW, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  
  lcd.begin();
  lcd.backlight();
  
  lastStateCLK = digitalRead(CLK);

  lcd.setCursor(0, 0);
  lcd.print("LED Brightness:");
  lcd.setCursor(0, 1);
  lcd.print(counter);
}

void loop() {
  currentStateCLK = digitalRead(CLK);
  
  if (currentStateCLK != lastStateCLK && currentStateCLK == 1) {
    if (digitalRead(DT) != currentStateCLK) {
      counter++;
      if (counter > 255) counter = 255;
    } else {
      counter--;
      if (counter < 0) counter = 0;
    }
    
    lcd.setCursor(0, 1);
    lcd.print("                ");
    lcd.setCursor(0, 1);
    lcd.print(counter);
    
    analogWrite(LED_PIN, counter);
  }

  if (digitalRead(SW) == LOW) {
    if (millis() - lastButtonPress > 200) {
      counter = 0;
      analogWrite(LED_PIN, counter);
      lcd.setCursor(0, 1);
      lcd.print("                ");
      lcd.setCursor(0, 1);
      lcd.print(counter);
    }
    lastButtonPress = millis();
  }
  
  lastStateCLK = currentStateCLK;
}
