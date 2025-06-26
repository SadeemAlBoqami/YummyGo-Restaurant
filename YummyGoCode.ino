#include <BluetoothSerial.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

BluetoothSerial SerialBT;
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int buzzerPin = 13;
const int buttonPin = 15;
bool buttonPressed = false;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("YummyGoRestaurant");
  lcd.init();
  lcd.backlight();
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  lcd.setCursor(0, 0);
  lcd.print("Welcome to       ");
  lcd.setCursor(0, 1);
  lcd.print("Yummy Go!!!      ");


  if (SerialBT.available()) {
    char c = SerialBT.read();

    if (c == '1') {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Meal 1");
      delay(3000);
    } 
    else if (c == '2') {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Meal 2");
      delay(3000);
    } 
    else if (c == '3') {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Meal 3");
      delay(3000);
    }
    else if (c == '4') {

      for (int i = 0; i < 2; i++) {
        digitalWrite(buzzerPin, HIGH);
        delay(500);
        digitalWrite(buzzerPin, LOW);
        delay(100);
      }
    }
  }

  if (digitalRead(buttonPin) == LOW && !buttonPressed) {
    buttonPressed = true;
    SerialBT.println("5");
    Serial.println("Sent: 5");

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Order ready!");
    delay(4000);

    lcd.clear();
  }

  if (digitalRead(buttonPin) == HIGH) {
    buttonPressed = false;
  }
}
