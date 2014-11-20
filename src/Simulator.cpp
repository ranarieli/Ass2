/*
 * Simulator.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: ran
 */

#include "../include/Simulator.h"

Simulator::Simulator(const int MAX_SPEED,const int DEFAULT_TIME_SLICE,
		const int MAX_TIME_SLICE, const int MIN_TIME_SLICE):
		_MAX_SPEED(MAX_SPEED),_DEFAULT_TIME_SLICE(DEFAULT_TIME_SLICE),
		_MAX_TIME_SLICE(MAX_TIME_SLICE),_MIN_TIME_SLICE(MIN_TIME_SLICE)
		{
	initRoads();
	initEvents();
	//cout<<_MAX_SPEED<<" "<<_DEFAULT_TIME_SLICE<<" "<<_MAX_TIME_SLICE<<_MIN_TIME_SLICE<<endl;
	//boost::property_tree::ptree pt = ic.read2(s1);
}
void Simulator::initEvents(){
	IniClass ic;
	events = new multimap<const int,Event*>;
	ic.readEvents(*events);
	multimap<const int,Event*>::iterator it;
	for (it=events->begin(); it!=events->end(); ++it)
	          std::cout << (*it).first << " => " << endl;
}
void Simulator::initRoads(){
	IniClass ic;
	roads = new multimap<const pair<string,string>,Road*>;
	ic.readRoadMap(*roads);
	multimap<const pair<string,string>,Road*>::iterator it;
//	for (it=roads->begin(); it!=roads->end(); ++it)
//	          std::cout << (*it).first.first << " => " << endl;

}


Simulator::~Simulator() {
	// TODO Auto-generated destructor stub
}
