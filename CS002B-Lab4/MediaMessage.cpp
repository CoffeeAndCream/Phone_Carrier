#include "MediaMessage.h"

MediaMessage::MediaMessage(){
}
MediaMessage::MediaMessage(std::string sender_number, std::string receiver_number, int size) :
	Message(sender_number, receiver_number),
	size_(size) {
}
MediaMessage::~MediaMessage(){
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
	os << media_message_obj.size_ << " " << media_message_obj.total_charge_;
	return os;
}