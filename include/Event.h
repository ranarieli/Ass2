/*
 * Event.h
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */

#include <string>
#include <vector>
#ifndef EVENT_H_
#define EVENT_H_

class Event {
public:
	Event();
	Event(const int _time,const std::string _carId,const std::string _type,const std::string _roadPlan);
	virtual ~Event();
	virtual void performEvent()=0;
private:
//	const int _id;

	const int _time;
	const std::string _carId;
	const std::string _type;
	const std::string _roadPlan;
};

class AddCarEvent : public Event {
public:
	AddCarEvent();
	virtual ~AddCarEvent();
private:
	std::vector<const std::string> *roadPlan;
};

class CarFaultEvent : public Event {
public:
	CarFaultEvent();
	virtual ~CarFaultEvent();
private:
	const int timeOfFualt;
};

#endif /* EVENT_H_ */
