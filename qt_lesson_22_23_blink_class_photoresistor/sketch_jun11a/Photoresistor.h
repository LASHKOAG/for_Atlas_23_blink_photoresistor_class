#ifndef PHOTORESISTOR_H
#define PHOTORESISTOR_H

#include "Arduino.h"

class Photoresistor
{
public:  
  Photoresistor();

  void init();

  int get_data_from_photoresistor();

  void my_print();
  
private:
  int value{0};
  
};

#endif
