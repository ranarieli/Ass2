/*
 * Junction.h
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */
#include <iostream>

#ifndef JUNCTION_H_
#define JUNCTION_H_

using namespace std;

class Junction {
public:
	Junction();
	Junction(const string id);
	virtual ~Junction();

private:
	const std::string _id;
};

#endif /* JUNCTION_H_ */
