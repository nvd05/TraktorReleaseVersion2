#pragma once

#include "Configuration/PinList.h"
#include "Memory/VariableList.h"
#include <Arduino.h>

void configuration_feedback_handlers()
{
	/*
	 * Библиотека Encoder не вынесла отдельную функцию обьявления.
	 * По этому установка пинов происходит при обьявление структуры в файле:
	 * Structures/EncoderMemory.h
	 */

	pinMode(PIN_BUTTON_FEEDBACK_BRAKE, INPUT);
}

void listener_feedback_handlers()
{
	feedback_values.encoder_rudder = encoder_memory.rudder.read();         // Руль
	feedback_values.button_brake = digitalRead(PIN_BUTTON_FEEDBACK_BRAKE); // Томроз
}
