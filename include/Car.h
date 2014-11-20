/*
 * Car.h
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */
#include <iostream>
#ifndef CAR_H_
#define CAR_H_

class Car {
public:
	Car();
	virtual ~Car();
private:
	const std::string id_;
	//roadPlan
	//speed
	//flag that points on good/faulty condition
};

#endif /* CAR_H_ */
