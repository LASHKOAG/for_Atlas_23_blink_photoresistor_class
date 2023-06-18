#ifndef BLINK_H
#define BLINK_H

#include "Arduino.h"

class Blink
{
public:
  Blink();

  void init();

  void my_blink(int _pin);

  void set_delay(unsigned int user_delay);
  int get_delay();

  int get_pin_white();
  int get_pin_red();
  int get_pin_blue();
  int get_pin_yellow();

  void led_turn_on(int _pin);
  void led_turn_off(int _pin);

  void semafor(int _pin_l, int _pin_r);
  
private:
  unsigned int m_delay{500};
  
  const int pin_white{4};
  const int pin_red{5};
  const int pin_blue{6};
  const int pin_yellow{7};
};

#endif
