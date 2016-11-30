#include <string>
#include <map>
#include <vector>
#include "Message.h"
#ifndef SMARTCARRIER_H
#define SMARTCARRIER_H
class SmartCarrier{
public:
	SmartCarrier();
	SmartCarrier(std::string);
	~SmartCarrier();
	void Init();
	void StartService();
	void SetCarrierName(std::string);
	std::string GetCarrierName();
private:
	std::string carrier_name_;
	std::map<std::string, std::vector<Message*>> accounts_map_;

	void Menu();
	void GetChoice();
	void ListAll();
	void SearchMessage();
	void EraseMessage();
	void DisconnectAccount();
	void StopService();
};
#endif