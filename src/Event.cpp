/*
 * Event.cpp
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */

#include "../include/Event.h"

Event::Event():_time(0),_carId("c1"),_type("mashho"),_roadPlan(NULL) {
	// TODO Auto-generated constructor stub

}

Event::Event(const int time,const std::string carId,const std::string type,const std::string roadPlan):_time(time),_carId(carId),_type(type),_roadPlan(roadPlan){

}

Event::~Event() {
	// TODO Auto-generated destructor stub
}

class AddCarEvent : public Event {

};

class CarFaultEvent : public Event {

};
