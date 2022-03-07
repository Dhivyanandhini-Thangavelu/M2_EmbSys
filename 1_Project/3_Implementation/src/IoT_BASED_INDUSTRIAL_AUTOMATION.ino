#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  lcd.print("IoT BASED  ");
  lcd.setCursor(0, 1);
  lcd.print("INDUSTRIAL ");
  delay(500); 
  lcd.clear();
  lcd.print(" AUTOMATION ");
  delay(500); 
}

void loop() {
//   digitalWrite(8, LOW); 
    int buttonState = digitalRead(9);
  // print out the value you read:
  Serial.println(buttonState);
  delay(500); 
   lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(buttonState); 
  if(buttonState ==0){
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
   digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
    digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("servo RUN");
  lcd.setCursor(0, 1);
  lcd.print("IR sensor detect");  
  }
    int buttonState1 = digitalRead(10);
  // print out the value you read:
//lcd.clear();
  lcd.setCursor(1, 1);
  lcd.print(buttonState1); 
  
  Serial.println(buttonState1);
  if(buttonState1 ==0){
     lcd.clear();
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
    lcd.clear();
   lcd.setCursor(0, 0);
  lcd.print("DC MOTOR RUN");
  lcd.setCursor(0, 1);
    lcd.print("PROXIMITY DETECT");
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);    
  }
  delay(100); 
//  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(100); 
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
//  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(100); 
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 delay(100); 
////  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
////  delay(100); 
//  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
//  delay(100); 
////  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
////  delay(100); 
//  digitalWrite(8, LOW);   // turn the LED on (HIGH is the voltage level)
////  delay(100);// wait for a second
////  // set the cursor to column 0, line 1
//  // (note: line 1 is the second row, since counting begins with 0):
//  lcd.setCursor(0, 1);
//  // print the number of seconds since reset:
//  lcd.print(millis() / 1000);
//  lcd.print("hello, world!");
}
