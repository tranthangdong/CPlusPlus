#include "SPI.h"
pinMode(ss, OUTPUT);
SPI.begin();
SPI.setBitOrder(MSBFIRST);
SPI.setBitOrder(LSBFIRST);
		
digitalWrite(SS, LOW);
SPI.transfer(value);
digitalWrite(ss, HIGH);
