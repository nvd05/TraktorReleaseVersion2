#pragma once

#include <Servo.h>

/**
 * @brief Серво => Память
 */
struct ServoMemory
{
	Servo kill; // Глушение
	Servo gas;  // Газ
};
