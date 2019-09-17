#include "main.h"
#include "okapi/api.hpp"




pros::Controller master(CONTROLLER_MASTER);

// auto driveR = master.get_analog(ANALOG_RIGHT_Y);
// auto driveL = master.get_analog(ANALOG_LEFT_Y);
//
// auto intake = master.get_digital(DIGITAL_R1);
// auto outtake = master.get_digital(DIGITAL_R2);
// auto tiltUp = master.get_digital(DIGITAL_L1);
// auto tiltBack = master.get_digital(DIGITAL_L2);
//////////////////////////////////////////////////////////////
// pros::Motor gR(1);
// pros::Motor sR(2);
// pros::Motor gL(-11);
// pros::Motor sL(-12);

okapi::MotorGroup leftMotors({1, 2});
okapi::MotorGroup rightMotors({-3, -4});

pros::Motor intakeR(3);
pros::Motor intakeL(13);

pros::Motor flippyR(4, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor flippyL(14, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_DEGREES);

bool tiltUp = master.get_digital_new_press(DIGITAL_UP);
bool tiltDown = master.get_digital_new_press(DIGITAL_DOWN);

float vertAngle = 615;
