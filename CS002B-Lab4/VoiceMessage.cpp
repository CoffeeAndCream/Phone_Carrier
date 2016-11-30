#include "VoiceMessage.h"

VoiceMessage::VoiceMessage(){
}
VoiceMessage::VoiceMessage(std::string sender_number, std::string receiver_number, int time) :
	Message(sender_number, receiver_number),
	time_in_seconds_(time) {
}
VoiceMessage::~VoiceMessage(){
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
	os << voice_message_obj.time_in_seconds_ << " " << voice_message_obj.total_charge_;
	return os;
}
