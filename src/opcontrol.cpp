#include "main.h"
#include "globals.hpp"
#include "okapi/api.hpp"
using namespace okapi;

void drive(){
		gL.move(master.get_analog(ANALOG_LEFT_Y));
		sL.move(master.get_analog(ANALOG_LEFT_Y));

		gR.move(-master.get_analog(ANALOG_RIGHT_Y));
		sR.move(-master.get_analog(ANALOG_RIGHT_Y));
}

void opcontrol() {
	while(true){
  	drive();
	}
}
