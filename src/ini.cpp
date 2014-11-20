/*
 * ini.cpp
 *
 *  Created on: Nov 17, 2014
 *      Author: ran
 */

#include "../include/ini.h"
#include <string>
IniClass::IniClass(){}

IniClass::~IniClass() {}

const int IniClass::stringToInt (const string s) const
{
	int res;
	stringstream convert(s);
	if ( !(convert >> res) )
		res = 0;
	return res;
}

void IniClass::read1() const{
	cout << "Starting read1" << endl;
	boost::property_tree::ptree pt;
	boost::property_tree::ini_parser::read_ini("file.ini", pt);
	int name1 = pt.get<int>("Section1.name1");
	int name2 = pt.get<int>("Section1.name2");
	string string1 =  pt.get<string>("Section2.name3");
	string string2 =  pt.get<string>("Section2.name4");
	cout << "Section1.name1 = "<< name1 << endl;
	cout << "Section1.name2 = "<< name2 << endl;
	cout << "Section2.name3 = "<< string1 << endl;
	cout << "Section2.name4 = "<< string2 << endl;
	cout << "Finished read1" << endl;
}

void IniClass::read2() const{
	cout << "Starting read2" << endl;
	boost::property_tree::ptree pt;
	boost::property_tree::ini_parser::read_ini("file.ini", pt);
	for (boost::property_tree::ptree::const_iterator section = pt.begin();section != pt.end(); section++) {
		cout << "[" <<section->first <<"]"<< endl;
		if(((string)section->first)[6]==1)
			for (boost::property_tree::ptree::const_iterator property =    section->second.begin();property != section->second.end(); property++) {
				cout << property->first <<"="<< boost::lexical_cast<int>(property->second.data()) <<endl;
			}
		else
			for (boost::property_tree::ptree::const_iterator property =    section->second.begin();property != section->second.end(); property++) {
				cout << property->first <<"="<< boost::lexical_cast<string>(property->second.data()) <<endl;
			}
	}
	cout << "Finished read2" << endl;
}

void IniClass::readRoadMap(multimap<const pair<string,string>,Road*> &roads) const{
	boost::property_tree::ptree pt;
	boost::property_tree::ini_parser::read_ini("RoadMap.ini", pt);
	multimap<const pair<string,string>,Road*>::iterator it;

	for (boost::property_tree::ptree::const_iterator section = pt.begin();section != pt.end(); section++) {
		string eJunction = section->first;
		for (boost::property_tree::ptree::const_iterator property =    section->second.begin();property != section->second.end(); property++) {
			const string sJunction = property->first;
			const string length = property->second.data();
			Junction *sJun = new Junction(sJunction);
			Junction *eJun = new Junction(eJunction);
			Road *road = new Road(sJun,eJun,stringToInt(length));
			const pair <string,string> key(sJunction,eJunction);
			roads.insert (pair<const pair<string,string>,Road*>(key,road));
		}
	}
}

void IniClass::readConfigurations(map<const string,const int> &conf) const{
		boost::property_tree::ptree pt;
		boost::property_tree::ini_parser::read_ini("Configuration.ini", pt);
		for (boost::property_tree::ptree::const_iterator section = pt.begin();section != pt.end(); section++) {
				for (boost::property_tree::ptree::const_iterator property =    section->second.begin();property != section->second.end(); property++) {
					const int val = stringToInt(property->second.data());
					conf.insert(pair<const string,const int>(property->first,val));
				}
		}
}

//AddCarEvent* IniClass::parseProperty(boost::property_tree::ptree::const_iterator property) const{
//	while ()
//
//return 0;
//}

void IniClass::readEvents(multimap<const int,Event*> &events) const{
		boost::property_tree::ptree pt;
		boost::property_tree::ini_parser::read_ini("Events.ini", pt);
		multimap<const int,Event*>::iterator it;

		for (boost::property_tree::ptree::const_iterator section = pt.begin();section != pt.end(); section++) {
				string event = section->first;
				const int id = stringToInt(event.substr(event.find_first_of('_')+1));
				for (boost::property_tree::ptree::const_iterator property =    section->second.begin();property != section->second.end(); property++) {
					if(property->second.data().compare("car_arrival"))
					{
						property.
					}
						/*const string sJunction = property->first;
					}
					const string length = property->second.data();
					Junction *sJun = new Junction(sJunction);
					Junction *eJun = new Junction(eJunction);
					Road *road = new Road(sJun,eJun,stringToInt(length));
					const pair <string,string> key(sJunction,eJunction);
					roads.insert (pair<const pair<string,string>,Road*>(key,road));*/
				}
			}
}




