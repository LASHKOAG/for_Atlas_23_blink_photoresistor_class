#include "Blink.h"

Blink::Blink()
{
  init();
}

void Blink::init()
{
  pinMode(pin_white, OUTPUT);
  pinMode(pin_red, OUTPUT);
  pinMode(pin_blue, OUTPUT);
  pinMode(pin_yellow, OUTPUT);
}

void Blink::my_blink(int _pin)
{
  digitalWrite(_pin, HIGH);
  delay(m_delay);
  digitalWrite(_pin, LOW);
  delay(m_delay);
}

void Blink::set_delay(unsigned int user_delay)
{
  if (user_delay <= 0){
    return;
  }
  
  m_delay = user_delay; 
}

int Blink::get_delay()
{
  return m_delay;
}


int Blink::get_pin_white()
{
  return pin_white;
}

int Blink::get_pin_blue()
{
  return pin_blue;
}


void Blink::led_turn_on(int _pin)
{
  digitalWrite(_pin, HIGH);
}

void Blink::led_turn_off(int _pin)
{
  digitalWrite(_pin, LOW);
}

void Blink::semafor(int _pin_l, int _pin_r)
{
  digitalWrite(_pin_l, HIGH);
  digitalWrite(_pin_r, LOW);
  delay(m_delay);
  digitalWrite(_pin_l, LOW);
  digitalWrite(_pin_r, HIGH);
  delay(m_delay);
}
