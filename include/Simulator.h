/*
 * Simulator.h
 *
 *  Created on: Nov 17, 2014
 *      Author: ranari
 */
#include <map>
#include "ini.h"
#include "Car.h"
#include "Junction.h"
#include "Event.h"
#include "Road.h"
#include <utility>
#include <vector>

#ifndef SIMULATOR_H_
#define SIMULATOR_H_
using namespace std;
class Simulator {
public:
	virtual ~Simulator();
	Simulator(const int MAX_SPEED,const int DEFAULT_TIME_SLICE,
	const int MAX_TIME_SLICE, const int MIN_TIME_SLICE);
	void initRoads();
	void initEvents();


private:
	int timeUnit;
	map<string,Car*> *cars;
	map<string,Junction*> *junctions;
	multimap<const int,Event*> *events;
	multimap<const pair<string,string>,Road*> *roads;
	const int _MAX_SPEED;
	const int _DEFAULT_TIME_SLICE;
	const int _MAX_TIME_SLICE;
	const int _MIN_TIME_SLICE;
//	multimap<const pair<string,string>,Road*>::iterator it;

};

#endif /* SIMULATOR_H_ */
