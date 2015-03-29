/*
 * MyClass.h
 *
 *  Created on: Mar 21, 2015
 *      Author: Jeff
 */
#pragma once

#ifndef MYCLASS_H_
#define MYCLASS_H_
#include "includes.h"

class MyClass {
	public:


		std::string value1;
		std::string value2;

		void setValue1(const std::string s)
		{
			this->value1 = s;
		}
		void setValue2(const std::string s)
		{
			this->value2 = s;
		}
		const std::string getValue1()
		{
			return this->value1;
		}
		const std::string getValue2()
		{
			return this->value2;
		}
	};
#endif /* MYCLASS_H_ */
