#include <iostream>
#include "TextMessage.h"
TextMessage::TextMessage() :
	Message() {
}
TextMessage::TextMessage(std::string sender_number, std::string receiver_number, std::string text_message) :
	Message(sender_number, receiver_number), 
	text_message_(text_message){
}
TextMessage::~TextMessage(){
	std::cout << "TextMessage with contents: \"" << *dynamic_cast<TextMessage*>(this) << "\" has been deleted.\n";

}
void TextMessage::SetTextMessage(std::string text_message) {
	text_message_ = text_message;
}
std::string TextMessage::GetTextMessage() {
	return text_message_;
}
double TextMessage::ComputeCharge() {
	return total_charge_ += .20;
}
std::ostream & operator<<(std::ostream& os, TextMessage& text_message_obj){
	os << text_message_obj.text_message_ << " $" << text_message_obj.total_charge_;
	return os;
}
double TextMessage::GetTotalCharge() {
	return total_charge_;
}