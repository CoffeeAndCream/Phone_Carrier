#include <iostream>
#include "VoiceMessage.h"
VoiceMessage::VoiceMessage(){
}
VoiceMessage::VoiceMessage(std::string sender_number, std::string receiver_number, int time) :
	Message(sender_number, receiver_number),
	time_in_seconds_(time) {
}
VoiceMessage::~VoiceMessage(){
	std::cout << "VoiceMessage with contents: " << *dynamic_cast<VoiceMessage*>(this) << " has been deleted.\n";
}
void VoiceMessage::SetTime(int time) {
	time_in_seconds_ = time;
}
int VoiceMessage::GetTime() {
	return time_in_seconds_;
}
double VoiceMessage::ComputeCharge() {
	return total_charge_ += (.015*time_in_seconds_);
}
std::ostream& operator<<(std::ostream& os, VoiceMessage& voice_message_obj) {
	int seconds = voice_message_obj.time_in_seconds_;
	int minutes = seconds / 60;
	int hours = minutes / 60;
	os << "TIME " << int(hours) << "-hours:" << int(minutes%60) << "-minutes:" << int(seconds%60) << "-seconds $" << voice_message_obj.total_charge_;
	return os;
}

double VoiceMessage::GetTotalCharge() {
	return total_charge_;
}