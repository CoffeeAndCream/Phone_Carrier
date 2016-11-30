#include <string>
#ifndef MESSAGE_H
#define MESSAGE_H
class Message{
public:
	Message();
	Message(std::string, std::string);
	virtual ~Message();
	void SetSenderNumber(std::string);
	void SetReceiverNumber(std::string);
	std::string GetSenderNumber();
	std::string GetReceiverNumber();
	virtual double ComputeCharge() = 0;
	bool operator==(const Message&);
private:
	std::string sender_number_;
	std::string receiver_number_;
};
#endif