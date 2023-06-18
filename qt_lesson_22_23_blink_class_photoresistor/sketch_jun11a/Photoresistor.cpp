#include "Photoresistor.h"

Photoresistor::Photoresistor()
{
  init();
}

void Photoresistor::init()
{
  pinMode(A0, INPUT);

  Serial.begin(9600);
}

int Photoresistor::get_data_from_photoresistor()
{
  return analogRead(A0);
}

void Photoresistor::my_print()
{
  Serial.println(get_data_from_photoresistor());
  delay(2);
}
