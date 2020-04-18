#ifndef MOTOR_SETUP_INIT_H
#define MOTOR_SETUP_INIT_H
#include "main.h"

// defines port numbers, used in motor.cpp
#define DRIVE_LEFT 11
#define DRIVE_LEFT_B 18
#define DRIVE_RIGHT 12
#define DRIVE_RIGHT_B 4

extern pros::Motor drive_left;
extern pros::Motor drive_left_b;
extern pros::Motor drive_right;
extern pros::Motor drive_right_b;

extern pros::Controller controller;

#endif
