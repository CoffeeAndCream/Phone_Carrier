#include <iostream>
#include <set>
#include "SmartCarrier.h"
#include "TextMessage.h"
#include "VoiceMessage.h"
#include "MediaMessage.h"
SmartCarrier::SmartCarrier(){
}
SmartCarrier::SmartCarrier(std::string carrier_name) :
	carrier_name_(carrier_name) {
}
SmartCarrier::~SmartCarrier(){
}
void SmartCarrier::SetCarrierName(std::string carrier_name){
	carrier_name_ = carrier_name;
}
std::string SmartCarrier::GetCarrierName() {
	return carrier_name_;
}
void SmartCarrier::Init() {
	std::set<std::string> phone_numbers = {"650-267-1289","408-235-1500","650-781-7900"
										  ,"415-298-2162","945-890-5913","408-720-0012"
										  ,"650-230-9912","408-462-7890","415-902-9581"
										  ,"310-290-1666"};
	for (std::set<std::string>::iterator iter = phone_numbers.begin(); iter != phone_numbers.end(); ++iter) {
		//STOPPED HERE USING ITER TO POTENTIALLY MAKE ADDING OBJECTS MUCH EASIER
	}
	TextMessage *text_message = new TextMessage("650-267-1289", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map_["650-267-1289"].push_back(text_message);
	text_message = new TextMessage("650-267-1289", "650-345-9001", "What do you know already?");
	accounts_map_["650-267-1289"].push_back(text_message);
	std::cout << *dynamic_cast<TextMessage*>(accounts_map_["650-267-1289"].at(0)); std::cout << std::endl;
	std::cout << *dynamic_cast<TextMessage*>(accounts_map_["650-267-1289"].at(1)); std::cout << std::endl;
	std::cout << *dynamic_cast<TextMessage*>(accounts_map_["650-267-1289"].at(0)); std::cout << std::endl;


	std::cout << "";
	std::cout << "\n";
}
void SmartCarrier::StartService() {
	//loop which gives user options
}
void SmartCarrier::Menu() {

}
void SmartCarrier::GetChoice() {

}
void SmartCarrier::ListAll() {
	//ListAll: list all accounts with total messages and total charges of each message type
}
void SmartCarrier::SearchMessage() {
	//SearchMessage: ask for an account, a message type (Text, Voice, or Media), from, and to. If the account exists use dynamic_cast
	//...to verify message type and then use the operator overload == defined in Message class to determine if there is a match. If so 
	//...display message information using  <<. Otherwise display an error message (by exception handler. See below).
}
void SmartCarrier::EraseMessage() {
	//EraseMessage: similar to SearchMessage. If found erase the message. Otherwise display an error message (by exception handler. See below).

}
void SmartCarrier::DisconnectAccount() {
	//DisconnectAccount: ask for an account phone number. If found erase the account from the map. Otherwise display an error message (by 
	//exception handler. See below).

}
void SmartCarrier::StopService() {
	//StopService: invoke ListAll, then clear all messages for all accounts, then clear the map, then display a bye-bye message, 
	//finally terminate the program with exit statement
}
/*READ THIS IMPORTANT MESSAGE*/
/*NOTE: For SearchMessage, EraseMessage, and DisconnectAccount use a try/catch block in each function. 
In the try block if an account is not found or if a message is not found throw an exception with error
message describing what has gone wrong. In the exception handler simply display the error message.
*/