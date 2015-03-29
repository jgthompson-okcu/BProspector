/*
 * Prospect.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: Jeff
 */

#include "Includes.h"

Prospect::Prospect()
{
	// fillF(tokens);
}

void Prospect::test()
{
	{
		std::cout << "Prospect Constructor " <<  std::endl;
	}
}



Prospect::~Prospect() {
	// TODO Auto-generated destructor stub
}
void Prospect::fillProspectFromTokens(StringVec & tokens)
{
	int i = 0;
		f0 = tokens[i++];
		f1 = tokens[i++];
		f2 = tokens[i++];
		f3 = tokens[i++];
		f4 = tokens[i++];
		f5 = tokens[i++];
		f6 = tokens[i++];
		f7 = tokens[i++];
		f8 = tokens[i++];
		f9 = tokens[i++];
		f10 = tokens[i++];
		f11 = tokens[i++];

		for(int x = 0; x < fields; x++)
		{
			std::cout << "Token f"<< x <<" = " << tokens[x] << std::endl;
		}
}

//void Prospect::fillProspectFromTokens(StringVec &tokens)
//{
//	int i = 0;
//	f0 = tokens[i++];
//	f1 = tokens[i++];
//	f2 = tokens[i++];
//	f3 = tokens[i++];
//	f4 = tokens[i++];
//	f5 = tokens[i++];
//	f6 = tokens[i++];
//	f7 = tokens[i++];
//	f8 = tokens[i++];
//	f9 = tokens[i++];
//	f10 = tokens[i++];
//	f11 = tokens[i++];
//
//	for(int x = 0; x < fields; x++)
//	{
//		std::cout << "Token f"<< x <<" = " << tokens[x] << std::endl;
//	}
//}

void fillProspectFromTokens(Prospect &p, std::vector<std::string>& tokens)
{
	int i = 0;
	p.f0 = tokens[i++];
	p.f1 = tokens[i++];
	p.f2 = tokens[i++];
	p.f3 = tokens[i++];
	p.f4 = tokens[i++];
	p.f5 = tokens[i++];
	p.f6 = tokens[i++];
	p.f7 = tokens[i++];
	p.f8 = tokens[i++];
	p.f9 = tokens[i++];
	p.f10 = tokens[i++];
	p.f11 = tokens[i++];

	for(int x = 0; x < p.fields; x++)
	{
		std::cout << "Token f"<< x <<" = " << tokens[x] << std::endl;
	}
}


