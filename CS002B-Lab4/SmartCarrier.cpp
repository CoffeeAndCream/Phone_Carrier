#include <iostream>
#include <iomanip>
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
	std::vector<Message*>::iterator iter_vector;
	std::map<std::string, std::vector<Message*>>::iterator iter_map;
	//iter_map loops through map, iter_vector loops through vector of Message pointers. Deletes all pointers.
	for (iter_map = accounts_map_.begin(); iter_map != accounts_map_.end(); ++iter_map) {
		std::cout << "Deleting messages from: " << iter_map->first << "\n";
		if (iter_map->second.empty()) {
			std::cout << "No messages for this account.\n";
		}
		for (iter_vector = iter_map->second.begin(); iter_vector != iter_map->second.end(); ++iter_vector) {
			delete *iter_vector;
		}
	}
	accounts_map_.clear();
}
void SmartCarrier::SetCarrierName(std::string carrier_name){
	carrier_name_ = carrier_name;
}
std::string SmartCarrier::GetCarrierName() {
	return carrier_name_;
}
void SmartCarrier::Init() {
	std::map<std::string, std::vector<Message*>>::iterator iter_map;
	int counter = 0;
	TextMessage* text_message = NULL;
	VoiceMessage* voice_message = NULL;
	MediaMessage* media_message = NULL;
	//650-267-1289
	text_message = new TextMessage("650-267-1289", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map_["650-267-1289"].push_back(text_message);
	voice_message = new VoiceMessage("650-267-1289", "650-345-9001", 100);
	accounts_map_["650-267-1289"].push_back(voice_message);
	media_message = new MediaMessage("650-267-1289", "650-333-9870", 15);
	accounts_map_["650-267-1289"].push_back(media_message);
	//408-235-1500
	text_message = new TextMessage("408-235-1500", "408-144-5647", "How are you?");
	accounts_map_["408-235-1500"].push_back(text_message);
	text_message = new TextMessage("408-235-1500", "408-546-7847", "Where are you?");
	accounts_map_["408-235-1500"].push_back(text_message);
	text_message = new TextMessage("408-235-1500", "888-142-2231", "I would like to apply for a job.");
	accounts_map_["408-235-1500"].push_back(text_message);
	voice_message = new VoiceMessage("408-235-1500", "888-142-2221", 30);
	accounts_map_["408-235-1500"].push_back(voice_message);
	voice_message = new VoiceMessage("408-235-1500", "212-241-4442", 52);
	accounts_map_["408-235-1500"].push_back(voice_message);
	voice_message = new VoiceMessage("408-235-1500", "414-111-9831", 11);
	accounts_map_["408-235-1500"].push_back(voice_message);
	media_message = new MediaMessage("408-235-1500", "180-645-6624", 25);
	accounts_map_["408-235-1500"].push_back(media_message);
	media_message = new MediaMessage("408-235-1500", "800-100-2112", 5);
	accounts_map_["408-235-1500"].push_back(media_message);
	media_message = new MediaMessage("408-235-1500", "909-049-1213", 9);
	accounts_map_["408-235-1500"].push_back(media_message);
	media_message = new MediaMessage("408-235-1500", "800-555-1255", 1);
	accounts_map_["408-235-1500"].push_back(media_message);
	//650-781-7900
	text_message = new TextMessage("650-781-7900", "408-144-5647", "I am running late.");
	accounts_map_["650-781-7900"].push_back(text_message);
	text_message = new TextMessage("650-781-7900", "888-514-5087", "I am going to the cafe!");
	accounts_map_["650-781-7900"].push_back(text_message);
	media_message = new MediaMessage("650-781-7900", "800-555-1255", 1);
	accounts_map_["650-781-7900"].push_back(media_message);
	media_message = new MediaMessage("650-781-7900", "111-142-1292", 55);
	accounts_map_["650-781-7900"].push_back(media_message);
	media_message = new MediaMessage("650-781-7900", "919-444-5313", 65);
	accounts_map_["650-781-7900"].push_back(media_message);
	//415-298-2162
	voice_message = new VoiceMessage("415-298-2162", "909-321-9381", 220);
	accounts_map_["415-298-2162"].push_back(voice_message);
	media_message = new MediaMessage("415-298-2162", "919-012-0013", 12);
	accounts_map_["415-298-2162"].push_back(media_message);
	//945-890-5913
	accounts_map_["945-890-5913"];
	//408-720-0012
	text_message = new TextMessage("408-720-0012", "606-515-1122", "What was the homework assignment?");
	accounts_map_["408-720-0012"].push_back(text_message);
	voice_message = new VoiceMessage("408-720-0012", "909-113-6163", 110);
	accounts_map_["408-720-0012"].push_back(voice_message);
	voice_message = new VoiceMessage("408-720-0012", "919-331-0013", 44);
	accounts_map_["408-720-0012"].push_back(voice_message);
	voice_message = new VoiceMessage("408-720-0012", "551-011-1221", 551);
	accounts_map_["408-720-0012"].push_back(voice_message);
	voice_message = new VoiceMessage("408-720-0012", "616-523-0909", 100);
	accounts_map_["408-720-0012"].push_back(voice_message);
	//650-230-9912
	media_message = new MediaMessage("650-230-9912", "212-022-1043", 5);
	accounts_map_["650-230-9912"].push_back(media_message);
	media_message = new MediaMessage("650-230-9912", "212-099-6613", 25);
	accounts_map_["650-230-9912"].push_back(media_message);
	media_message = new MediaMessage("650-230-9912", "819-612-0773", 100);
	accounts_map_["650-230-9912"].push_back(media_message);
	//408-462-7890
	text_message = new TextMessage("408-462-7890", "408-144-5647", "What do you want for dinner?");
	accounts_map_["408-462-7890"].push_back(text_message);
	text_message = new TextMessage("408-462-7890", "888-514-5087", "Going to the grocery store.");
	accounts_map_["408-462-7890"].push_back(text_message);
	text_message = new TextMessage("408-462-7890", "408-144-5647", "Making dinner!");
	accounts_map_["408-462-7890"].push_back(text_message);
	text_message = new TextMessage("408-462-7890", "888-514-5087", "At home!");
	accounts_map_["408-462-7890"].push_back(text_message);
	voice_message = new VoiceMessage("408-462-7890", "551-011-1221", 120);
	accounts_map_["408-462-7890"].push_back(voice_message);
	voice_message = new VoiceMessage("408-462-7890", "616-523-0909", 100);
	accounts_map_["408-462-7890"].push_back(voice_message);
	media_message = new MediaMessage("408-462-7890", "212-022-1043", 50);
	accounts_map_["408-462-7890"].push_back(media_message);
	media_message = new MediaMessage("408-462-7890", "212-099-6613", 20);
	accounts_map_["408-462-7890"].push_back(media_message);
	media_message = new MediaMessage("408-462-7890", "819-612-0773", 10);
	accounts_map_["408-462-7890"].push_back(media_message);
	//415-902-9581
	text_message = new TextMessage("415-902-9581", "408-144-5647", "Just visited Washington DC!");
	accounts_map_["415-902-9581"].push_back(text_message);
	voice_message = new VoiceMessage("415-902-9581", "551-011-1221", 50);
	accounts_map_["415-902-9581"].push_back(voice_message);
	voice_message = new VoiceMessage("415-902-9581", "616-523-0909", 60);
	accounts_map_["415-902-9581"].push_back(voice_message);
	media_message = new MediaMessage("415-902-9581", "909-049-1213", 9);
	accounts_map_["415-902-9581"].push_back(media_message);
	media_message = new MediaMessage("415-902-9581", "800-555-1255", 1);
	accounts_map_["415-902-9581"].push_back(media_message);
	//310-290-1666
	text_message = new TextMessage("310-290-1666", "408-144-5641", "Where is the train station?");
	accounts_map_["310-290-1666"].push_back(text_message);
	text_message = new TextMessage("310-290-1666", "408-144-5643", "Riding the subway");
	accounts_map_["310-290-1666"].push_back(text_message);
	text_message = new TextMessage("310-290-1666", "408-144-5642", "Sorry! I lost service in the tunnel.");
	accounts_map_["310-290-1666"].push_back(text_message);
}
void SmartCarrier::StartService() {
	Menu();
}
void SmartCarrier::Menu() {
	int option = 0;
	do {
		std::cout << "\n\t\t" << carrier_name_ << std::endl;
		std::cout << "\tMESSAGE UTILIZATION AND ACCOUNT ADMIN\n\n";
		std::cout << "\t1. List summary of message usages / charges for all accounts\n";
		std::cout << "\t2. Search a message from an account\n";
		std::cout << "\t3. Erase a message from an account\n";
		std::cout << "\t4. Disconnect an account\n";
		std::cout << "\t5. Quit\n";
		option = GetChoice();
		switch (option) {
		case 1:
			ListAll();
			break;
		case 2:
			SearchMessage();
			break;
		case 3:
			EraseMessage();
			break;
		case 4:
			DisconnectAccount();
			break;
		case 5:
			StopService();
			break;
		default:
			std::cout << "Non-existent option\n";
			break;
		}
	} while (option != 5);
}
int SmartCarrier::GetChoice() {
	int option = 0;
	std::cin >> option;
	return option;
}
void SmartCarrier::ListAll() {
	int total_text_messages = 0;
	int total_media_messages = 0;
	int total_voice_messages = 0;
	double total_text_cost = 0;
	double total_media_cost = 0;
	double total_voice_cost = 0;
	std::cout << "Phone Number\tTotal Messages\tText\tVoice\tMedia\tTotal Charges\n";
	for (auto iter_map = accounts_map_.begin(); iter_map != accounts_map_.end(); ++iter_map) {
		std::cout << iter_map->first << "\t\t" << iter_map->second.size() << "\t  ";
		for (auto iter_vector : iter_map->second) {
			if (dynamic_cast<VoiceMessage*>(iter_vector)) {
				++total_voice_messages;
				total_voice_cost = iter_vector->GetTotalCharge();
			}
			if (dynamic_cast<TextMessage*>(iter_vector)) {
				++total_text_messages;
				iter_vector->ComputeCharge();
				total_text_cost = iter_vector->GetTotalCharge();
			}
			if (dynamic_cast<MediaMessage*>(iter_vector)) {
				++total_media_messages;
				iter_vector->ComputeCharge();
				total_media_cost = iter_vector->GetTotalCharge();
			}
		}
		std::cout << total_text_messages << "\t  " << total_voice_messages << "\t  " << total_media_messages << "\t  $";
		std::cout << std::fixed << std::setprecision(2) << total_text_cost+total_voice_cost+total_media_cost << std::endl;

		total_text_messages = 0;
		total_media_messages = 0;
		total_voice_messages = 0;
		total_text_cost = 0;
		total_media_cost = 0;
		total_voice_cost = 0;
	}
}

void SmartCarrier::SearchMessage() {
	std::string account_number;
	std::string message_type;
	std::string receiving_number;
	std::vector<Message*>::iterator iter_vector;
	Message *message = NULL;

	std::cout << "What is your account? (Phone number as ###-###-####): ";
	std::cin >> account_number;
	std::cout << "What type of message are your looking for? (Text, Voice, Media) ";
	std::cin >> message_type;
	std::cout << "What is the receiving account number? (Phone number as ###-###-####): ";
	std::cin >> receiving_number;
	try {
		accounts_map_.at(account_number);
	}
	catch (const std::exception& e) {
		std::cout << e.what();
	}
	for (iter_vector = accounts_map_.find(account_number)->second.begin(); iter_vector != accounts_map_.find(account_number)->second.end(); ++iter_vector) {
		if (dynamic_cast<VoiceMessage*>(*iter_vector)) {
			message = new VoiceMessage(account_number, receiving_number, 0);
			try { 
				if (*dynamic_cast<VoiceMessage*>(message) == *dynamic_cast<VoiceMessage*>(*iter_vector)) {
					std::cout << *dynamic_cast<VoiceMessage*>(*iter_vector) << std::endl;
				}
			}
			catch (std::exception& e) {
				std::cout << e.what();
			}
		}
		if (dynamic_cast<TextMessage*>(*iter_vector)) {
			message = new TextMessage(account_number, receiving_number, "");
			try {
				if (*dynamic_cast<TextMessage*>(message) == *dynamic_cast<TextMessage*>(*iter_vector)) {
					std::cout << *dynamic_cast<TextMessage*>(*iter_vector) << std::endl;
				}
			}
			catch (std::exception& e) {
				std::cout << e.what();
			}
		}
		if (dynamic_cast<MediaMessage*>(*iter_vector)) {
			message = new MediaMessage(account_number, receiving_number, 0);
			try {
				if (*dynamic_cast<MediaMessage*>(message) == *dynamic_cast<MediaMessage*>(*iter_vector)) {
					std::cout << *dynamic_cast<MediaMessage*>(*iter_vector) << std::endl;
				}
			}
			catch (std::exception& e) {
				std::cout << e.what();
			}
		}
	}
}
void SmartCarrier::EraseMessage() {
	std::string account_number;
	std::string message_type;
	std::string receiving_number;
	Message *message = NULL;

	std::cout << "What is your account? (Phone number as ###-###-####): ";
	std::cin >> account_number;
	std::cout << "What type of message are your looking for? (Text, Voice, Media) ";
	std::cin >> message_type;
	std::cout << "What is the receiving account number? (Phone number as ###-###-####): ";
	std::cin >> receiving_number;
	try {
		accounts_map_.at(account_number);
	}
	catch (const std::exception& e) {
		std::cout << e.what();
	}
	for (auto iter_vector = accounts_map_.find(account_number)->second.begin(); iter_vector != accounts_map_.find(account_number)->second.end();) {
		if (dynamic_cast<VoiceMessage*>(*iter_vector)) {
			message = new VoiceMessage(account_number, receiving_number, 0);
			try {
				if (*dynamic_cast<VoiceMessage*>(message) == *dynamic_cast<VoiceMessage*>(*iter_vector)) {
					iter_vector = accounts_map_.find(account_number)->second.erase(iter_vector);
				}
				else {
					++iter_vector;
				}
			}
			catch (std::exception& e) {
				std::cout << e.what();
			}
		}
		if (dynamic_cast<TextMessage*>(*iter_vector)) {
			message = new TextMessage(account_number, receiving_number, "");
			try {
				if (*dynamic_cast<TextMessage*>(message) == *dynamic_cast<TextMessage*>(*iter_vector)) {
					iter_vector = accounts_map_.find(account_number)->second.erase(iter_vector);
				}
				else {
					++iter_vector;
				}
			}
			catch (std::exception& e) {
				std::cout << e.what();
			}
		}
		if (dynamic_cast<MediaMessage*>(*iter_vector)) {
			message = new MediaMessage(account_number, receiving_number, 0);
			try {
				if (*dynamic_cast<MediaMessage*>(message) == *dynamic_cast<MediaMessage*>(*iter_vector)) {
					iter_vector = accounts_map_.find(account_number)->second.erase(iter_vector);
				}
				else {
					++iter_vector;
				}
			}
			catch (std::exception& e) {
				std::cout << e.what();
			}
		}
	}
}
void SmartCarrier::DisconnectAccount() {
	std::string account_number;
	std::cout << "What is your account number? (###-###-####)\n";
	std::cin >> account_number;
	try {
		if (accounts_map_.find(account_number) != accounts_map_.end()) {
			for (auto iter_vector = accounts_map_.find(account_number)->second.begin(); iter_vector != accounts_map_.find(account_number)->second.end(); ++iter_vector) {
				delete *iter_vector;
			}
			accounts_map_.erase(accounts_map_.find(account_number));
		}
	}
	 catch(std::exception& e){
		 std::cout << e.what();
	}

}
void SmartCarrier::StopService() {
	ListAll();
	std::cout << "Thanks for using " << carrier_name_ << "! See you later!\n" << std::endl;
	delete this;
	std::cout << "GOODBYE!\n";
	getchar();
}