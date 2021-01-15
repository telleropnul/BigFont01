#ifndef BigFont01_h
#define BigFont01_h

#include "Arduino.h"
#include "LiquidCrystal.h"

class BigFont01 {
	public:
		BigFont01(LiquidCrystal*);
		void begin();
		int write(int, int, char);
	private:
		LiquidCrystal* _lcd;
};

#endif