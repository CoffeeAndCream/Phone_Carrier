#include <iostream>
#include "SmartCarrier.h"
#include "TextMessage.h"
#include "VoiceMessage.h"
#include "MediaMessage.h"

int main() {
	SmartCarrier* carrier = new SmartCarrier("FOOTHILL WIRELESS");
	carrier->Init();
	getchar();
	return 0;
}