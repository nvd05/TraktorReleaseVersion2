#include "Handlers/FeedbackHandlers.h"
#include "Handlers/RemoteHandler.h"
#include "Handlers/ServoHandlers.h"
#include "Handlers/RelayHandlers.h"

void setup()
{
	configuration_feedback_handlers(); // Обратная связь
	configure_remote_handler();        // Пульт

	configure_servo_handlers();        // Серво
	configure_relay_handlers();        // Реле
}

void loop()
{
	listener_feedback_handlers(); // Обратная связь
	listener_remote_handler();    // Пульт

	listener_servo_handlers();    // Серво
	listener_relay_handlers();    // Реле
}
