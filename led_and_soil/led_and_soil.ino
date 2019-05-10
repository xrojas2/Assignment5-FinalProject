
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


const int led= 13;//Digital pin that the LED is connected

void setup(){
Serial.begin(9600);
lcd.init();    // initialize the lcd 
     lcd.backlight();
pinMode(led,OUTPUT);
}

void loop() {
int sensorReading= analogRead(A0); //reads the sensor value
Serial.println (sensorReading); //prints out the sensor reading
lcd.backlight();
     lcd.setCursor(1,0);
if (sensorReading > 500){//if reading is above 600, LED blinks on and off
  lcd.print("I'M PARCHED!!!");
digitalWrite(led,HIGH); //turns the LED on
delay(1000); //waits for a second
digitalWrite(led,LOW); //turns the LED off
delay(1000); //waits for a second
lcd.clear();

}else
 lcd.backlight();
 lcd.setCursor(1,0);
  if (sensorReading < 300);
      lcd.print("I'M QUENCHED!!!");
      digitalWrite(led, HIGH);
      

}
