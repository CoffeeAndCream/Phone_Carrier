#include <iostream>
#include "SmartCarrier.h"
#include "TextMessage.h"
#include "VoiceMessage.h"
#include "MediaMessage.h"

int main() {
	SmartCarrier* carrier = new SmartCarrier("FOOTHILL WIRELESS");
	MediaMessage* media = new MediaMessage("111-111-1111", "123-1234-1123", 100);
	media->ComputeCharge();
	std::cout << *media;
	getchar();
	return 0;
}