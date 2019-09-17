#include "main.h"
#include "okapi/api.hpp"
#include "globals.hpp"
using namespace okapi;

/**
* Runs the user autonomous code. This function will be started in its own task
* with the default priority and stack size whenever the robot is enabled via
* the Field Management System or the VEX Competition Switch in the autonomous
* mode. Alternatively, this function may be called in initialize or opcontrol
* for non-competition testing purposes.
*
* If the robot is disabled or communications is lost, the autonomous task
* will be stopped. Re-enabling the robot will restart the task, not re-start it
* from where it left off.
*/

auto drive = ChassisControllerBuilder()
.withMotors(leftMotors, rightMotors)
.withSensors(
  {'A', 'B'},       // Left encoder in ADI ports A & B
  {'C', 'D', true}, // Right encoder in ADI ports C & D (reversed)
  {'E', 'F'}        // Back encoder
)
.withDimensions({{4.1_in, 11.5_in, 2_in, 3.25_in}, 360})
.build();

void autonomous() {

  drive->moveDistance(100);

}
