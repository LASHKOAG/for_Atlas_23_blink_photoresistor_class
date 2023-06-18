#include "Blink.h"
#include "Photoresistor.h"

Blink bl;
Photoresistor ph;

void setup() {
//  pinMode(4, OUTPUT);
//
//pinMode(A0, INPUT);
//Serial.begin(9600);
//
  bl.init();
  ph.init();

}

void loop() {
//  digitalWrite(4, HIGH);
//  delay(1000);
//  digitalWrite(4, LOW);
//  delay(1000);

//  bl.my_blink(bl.get_pin_white());
  bl.my_blink(bl.get_pin_blue());

//  bl.led_turn_on(bl.get_pin_white());/
//  delay(3000);
//  bl.led_turn_off(bl.get_pin_white());
//  delay(3000);
//  bl.semafor(bl.get_pin_white(), bl.get_pin_blue());
//  bl.led_turn_off(bl.get_pin_white());
//
//  int value = analogRead(A0);
//  Serial.println(value);
//
//  //max dark 0 ... 1024 max white
//
//  delay(2);

  ph.my_print();
}
