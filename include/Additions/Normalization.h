#pragma once

#include <Arduino.h>

long map_normalization(long current, long minimum, long maximum, long transfer_minimum, long transfer_maximum)
{
	return map(constrain(current, minimum, maximum), minimum, maximum, transfer_minimum, transfer_maximum);
}
