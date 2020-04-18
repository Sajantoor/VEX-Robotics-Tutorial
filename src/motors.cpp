#include "main.h"
#include "motors.h"

// Drive motors
pros::Motor drive_left(DRIVE_LEFT, MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor drive_left_b(DRIVE_LEFT_B, MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor drive_right(DRIVE_RIGHT, MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor drive_right_b(DRIVE_RIGHT_B, MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
// Controller
pros::Controller controller (pros::E_CONTROLLER_MASTER);
