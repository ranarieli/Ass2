/*
 * ini.h
 *
 *  Created on: Nov 17, 2014
 *      Author: ran
 */
#include <boost/property_tree/ini_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/lexical_cast.hpp>

#ifndef INI_H_
#define INI_H_

#include <iostream>
#include <string>
#include <map>
#include "Road.h"
#include <utility>
#include <vector>
#include "Event.h"

using namespace std;

class IniClass{
private:

public:
    IniClass();
    virtual ~IniClass();
    void read1() const;
    void read2() const;
    void readRoadMap(multimap<const pair<string,string>,Road*> &roads) const;
    const int stringToInt (const string s) const;
    void readConfigurations(map<const string,const int> &conf) const;
    void readEvents(multimap<const int,Event*> &events) const;
//    AddCarEvent* parseProperty(boost::property_tree::ptree::const_iterator property) const;
};

#endif /* INI_H_ */
