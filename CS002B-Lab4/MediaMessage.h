#include "Message.h"
#ifndef MEDIAMESSAGE_H
#define MEDIAMESSAGE_H
class MediaMessage :
	public Message{
public:
	MediaMessage();
	MediaMessage(std::string, std::string, int);
	virtual ~MediaMessage();
	void SetMediaSize(int);
	int GetMediaSize();
	virtual double ComputeCharge();
	friend std::ostream& operator<<(std::ostream&, MediaMessage&);
	double GetTotalCharge();
private:
	int size_;
	double total_charge_ = 0.0;
};
#endif