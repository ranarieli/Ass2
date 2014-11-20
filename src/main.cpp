/*
 * main.cpp
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */
#include "../include/Event.h"
#include "../include/ini.h"
#include "../include/Simulator.h"
#include <string>
#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main(int argc, char *argv[]){
int david =3;
	  string arg1 = "RoadMap.ini";
	  string arg2 = "Configurations.ini";
	  string arg3 = "Commands.ini";
	  string arg4 = "Events.ini";
	  IniClass ic;
	  const int a = 1;
	  map<const string,const int> *conf = new map<const string,const int>;
	  ic.readConfigurations(*conf);
	  Simulator *s = new Simulator(conf->find("MAX_SPEED")->second,
	  conf->find("DEFAULT_TIME_SLICE")->second, conf->find("MAX_TIME_SLICE")->second,
			  conf->find("MIN_TIME_SLICE")->second);
//	  map<const string,const int>::iterator it = conf->begin();
//	  for (it=conf->begin(); it!=conf->end(); ++it)
//	    std::cout << it->first << " => " << it->second << '\n';

delete conf;



}
