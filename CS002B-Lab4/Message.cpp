#include "Message.h"
Message::Message(){
}
Message::Message(std::string sender_number, std::string receiver_number) :
	sender_number_(sender_number),
	receiver_number_(receiver_number) {
}
Message::~Message(){
}
void Message::SetSenderNumber(std::string sender_number) {
	sender_number_ = sender_number;
}
void Message::SetReceiverNumber(std::string receiver_number) {
	receiver_number_ = receiver_number;
}
std::string Message::GetSenderNumber() {
	return sender_number_;
}
std::string Message::GetReceiverNumber() {
	return receiver_number_;
}
bool Message::operator==(const Message& rh_message) {
	return (this->sender_number_ == rh_message.sender_number_) && (this->receiver_number_ == rh_message.receiver_number_);
}
double Message::ComputeCharge() {
	return 0.0;
}
