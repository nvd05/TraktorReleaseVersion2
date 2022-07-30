#pragma once

#include "Configuration/PinList.h"
#include <Encoder.h>

/**
 * @brief Энкодер => Память
 */
struct EncoderMemory
{
	Encoder rudder; // Руль

	EncoderMemory();
};

EncoderMemory::EncoderMemory()
: rudder(Encoder(PIN_ENCODER_FEEDBACK_RUDDER_INPUT_A, PIN_ENCODER_FEEDBACK_RUDDER_INPUT_B))
{
};
