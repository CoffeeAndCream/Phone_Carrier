#include "Message.h"
#ifndef VOICEMESSAGE_H
#define VOICEMESSAGE_H
class VoiceMessage :
	public Message {
public:
	VoiceMessage();
	VoiceMessage(std::string, std::string, int);
	virtual ~VoiceMessage();
	void SetTime(int);
	int GetTime();
	virtual double ComputeCharge();
	friend std::ostream& operator<<(std::ostream&, VoiceMessage&);
private:
	int time_in_seconds_;
	double total_charge_ = 0.0;
};
#endif VOICEMESSAGE_H
