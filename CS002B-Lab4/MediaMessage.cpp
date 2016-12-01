#include <iostream>
#include "MediaMessage.h"
MediaMessage::MediaMessage(){
}
MediaMessage::MediaMessage(std::string sender_number, std::string receiver_number, int size) :
	Message(sender_number, receiver_number),
	size_(size) {
}
MediaMessage::~MediaMessage(){
	std::cout << "MediaMessage with contents: " << *dynamic_cast<MediaMessage*>(this) << " has been deleted.\n";
}
void MediaMessage::SetMediaSize(int size) {
	size_ = size;
}
int MediaMessage::GetMediaSize() {
	return size_;
}
double MediaMessage::ComputeCharge() {
	return total_charge_ += (.10 * size_);
}
std::ostream& operator<<(std::ostream& os, MediaMessage& media_message_obj) {
	os << media_message_obj.size_ << "MB $" << media_message_obj.total_charge_;
	return os;
}
double MediaMessage::GetTotalCharge() {
	return total_charge_;
}