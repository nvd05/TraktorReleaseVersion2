#pragma once

#include "Configuration/PinList.h"
#include "Memory/VariableList.h"
#include <Arduino.h>

void configure_remote_handler()
{
	pinMode(PIN_REMOTE_CHANNEL_1, INPUT);
	pinMode(PIN_REMOTE_CHANNEL_2, INPUT);
	pinMode(PIN_REMOTE_CHANNEL_3, INPUT);
	pinMode(PIN_REMOTE_CHANNEL_4, INPUT);
	pinMode(PIN_REMOTE_CHANNEL_5, INPUT);
	pinMode(PIN_REMOTE_CHANNEL_6, INPUT);
}

void listener_remote_handler()
{
	remote_values.right_stick_width            = pulseIn(PIN_REMOTE_CHANNEL_1, HIGH);
	remote_values.right_stick_height           = pulseIn(PIN_REMOTE_CHANNEL_2, HIGH);
	remote_values.left_stick_height            = pulseIn(PIN_REMOTE_CHANNEL_3, HIGH);
	remote_values.left_stick_width             = pulseIn(PIN_REMOTE_CHANNEL_4, HIGH);
	remote_values.three_position_toggle_switch = pulseIn(PIN_REMOTE_CHANNEL_5, HIGH);
	remote_values.two_position_toggle_switch   = pulseIn(PIN_REMOTE_CHANNEL_6, HIGH);
}
