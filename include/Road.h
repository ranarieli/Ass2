/*
 * Road.h
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */
#include "Junction.h"

#ifndef ROAD_H_
#define ROAD_H_

class Road {
public:
	Road();
	Road(const Junction *sJunction,const Junction *eJunction,const int length);
	virtual ~Road();
private:
	const Junction* _sJunction;
	const Junction* _eJunction;
	const int length;
};

#endif /* ROAD_H_ */
