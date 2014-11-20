/*
 * Report.h
 *
 *  Created on: Nov 12, 2014
 *      Author: ran
 */

#ifndef REPORT_H_
#define REPORT_H_

class Report {
public:
	Report();
	virtual ~Report();
	virtual void writeReport()=0;
};

class CarReport : public Report {
public:
	CarReport();
	virtual ~CarReport();
};

class RoadReport : public Report {
public:
	RoadReport();
	virtual ~RoadReport();
};

class JunctionReport : public Report {
public:
	JunctionReport();
	virtual ~JunctionReport();
};

#endif /* REPORT_H_ */
