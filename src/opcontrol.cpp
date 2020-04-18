#include "main.h"
#include "motors.h"

void opcontrol() {
  int stickArray[2];

  while (true) {
    stickArray[0] = pow(controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y), 3) / pow(127, 2);
    stickArray[1] = pow(controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y), 3) / pow(127, 2);

    // stick deadzone detection and removal to avoid stalling the motors
    for (size_t i = 0; i < 2; i++) {
      if (abs(stickArray[i]) < 15) {
        stickArray[i] = 0;
      }
    }
    // moves motors
    drive_left.move(stickArray[0]);
		drive_left_b.move(stickArray[0]);
		drive_right.move(stickArray[1]);
		drive_right_b.move(stickArray[1]);
  }
}
