#pragma once

#include "Additions/Normalization.h"
#include "Configuration/PWMValues.h"
#include "Configuration/PinList.h"
#include "Memory/VariableList.h"
#include <Servo.h>

void configure_servo_handlers()
{
	servo_memory.kill.attach(PIN_SERVO_KILL); // Глушение
	servo_memory.gas.attach(PIN_SERVO_GAS);   // Газ
}

void listener_servo_handlers()
{
	servo_memory.kill.write(remote_values.two_position_toggle_switch > PWM_SERVO_KILL_MINIMUM ? MAX_PULSE_WIDTH : MIN_PULSE_WIDTH);                             // Глушение
	servo_memory.gas.write(map_normalization(remote_values.left_stick_height, PWM_SERVO_GAS_MINIMUM, PWM_SERVO_GAS_MAXIMUM, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH)); // Газ
}
