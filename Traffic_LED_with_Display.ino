// The Program displays traffic lights concept along with LED display module
// The Program has been tested and updated on 25th Jan 2021.

#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>

int No_of_Times = 0;
#define MAX_NO_OF_TIMES 6
#define TIME_DELAY_MILLI_SECS 1000

#define LED1  8
#define LED2  9
#define LED3  10

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);

  lcd.begin(16,2);
  lcd.display();
  lcd.setBacklight(0x08);
  lcd.setCursor(0,0);
  lcd.print("Welcome:");
}

void loop() {

    lcd.clear();
    while( No_of_Times < MAX_NO_OF_TIMES)
    {
        No_of_Times = No_of_Times + 1;
        Serial.println(No_of_Times);
        lcd.setCursor(0,1);
        lcd.print("Counter:");
        lcd.print(No_of_Times);
     
        digitalWrite(LED1,HIGH);
        lcd.setCursor(0,0);
        lcd.print("LED1"); 
        delay(TIME_DELAY_MILLI_SECS);
        digitalWrite(LED1,LOW);
        delay(TIME_DELAY_MILLI_SECS);
 
        digitalWrite(LED2,HIGH);
        lcd.setCursor(0,0);
        lcd.print("LED2");      
        delay(TIME_DELAY_MILLI_SECS);
        digitalWrite(LED2,LOW);
        delay(TIME_DELAY_MILLI_SECS);
 
        digitalWrite(LED3,HIGH);
        lcd.setCursor(0,0);
        lcd.print("LED3");
        delay(TIME_DELAY_MILLI_SECS);
        digitalWrite(LED3,LOW);
        delay(TIME_DELAY_MILLI_SECS);
    }
    lcd.clear();
    lcd.print("Welcome:");
}
