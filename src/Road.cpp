/*
 * Road.cpp
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */

#include "../include/Road.h"

Road::Road():_sJunction(0),_eJunction(0),length(0){
	// TODO Auto-generated constructor stub

}

Road::Road(const Junction *sJunction,const Junction *eJunction,const int ilength):_sJunction(sJunction),_eJunction(eJunction),length(ilength){

}

Road::~Road() {
	// TODO Auto-generated destructor stub
}

