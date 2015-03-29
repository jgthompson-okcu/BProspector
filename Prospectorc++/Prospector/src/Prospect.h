/*
 * Prospect.h
 *
 *  Created on: Mar 21, 2015
 *      Author: Jeff
 */

#ifndef PROSPECT_H_
#define PROSPECT_H_

#include <vector>
#include <string>
#include "includes.h"

typedef std::vector<std::string> StringVec;

class Prospect
{
public:

	Prospect();
	virtual ~Prospect();
	const int fields=12;
	void test();

	// void fillF(vector<string>& tokens);
	std::string f0;
	std::string f1;
	std::string f2;
	std::string f3;
	std::string f4;
	std::string f5;
	std::string f6;
	std::string f7;
	std::string f8;
	std::string f9;
	std::string f10;
	std::string f11;
	std::string custID;
	std::string zipcode;
	std::string numchildren;
	std::string age;
	std::string lastaddresschange;
	std::string income;
	std::string lasthomepurchase;
	std::string currenthomeowner;
	std::string lastcarpurchase;
	std::string currentcarowner;
	std::string mortgagesuccess;
	std::string carloansuccess;
	void fillProspectFromTokens(StringVec & tokens);


};


void fillProspectFromTokens(Prospect &p, StringVec v);

#endif /* PROSPECT_H_ */
