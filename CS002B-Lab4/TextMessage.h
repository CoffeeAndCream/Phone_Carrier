#include "Message.h"
#ifndef TEXTMESSAGE_H
#define TEXTMESSAGE_H
class TextMessage :
	public Message {
public:
	TextMessage();
	TextMessage(std::string, std::string, std::string);
	virtual ~TextMessage();
	void SetTextMessage(std::string);
	std::string GetTextMessage();
	virtual double ComputeCharge();
	friend std::ostream& operator<<(std::ostream&, TextMessage&);
private:
	std::string text_message_;
	double total_charge_ = 0.0;
};
#endif