#pragma once

#include "Configuration/PWMValues.h"
#include "Configuration/PinList.h"
#include "Memory/VariableList.h"
#include <Arduino.h>

void configure_relay_handlers()
{
	pinMode(PIN_RELAY_IGNITION, OUTPUT); // Зажигание
}

void listener_relay_handlers()
{
	digitalWrite(PIN_RELAY_IGNITION, remote_values.left_stick_width > PWM_RELAY_IGNITION_MINIMUM ? HIGH : LOW); // Зажигание
}
