/*
 * elements.h
 *
 *  Created on: 20.02.2018
 *      Author: temeypy
 */

#ifndef ELEMENTS_H_
#define ELEMENTS_H_

#include <string>
#include "constsAvalues.h"

class Element{
public:
	virtual bool change(std::string data) = 0;
	virtual ~Element(){};
};

class logical_operation: public Element{
public:
	bool change(std::string data) override;
};

class logical_and:public logical_operation{
};

class logical_or:public logical_operation{
};

class logical_xor:public logical_operation{
};

class math_operation: public Element{
public:
	bool change(std::string data) override;
};

class math_plus: public math_operation{
};

class math_minus: public math_operation{
};

class math_divide: public math_operation{
};

class math_multp: public math_operation{
};

class value_type: public Element{
std::string type;
std::string value;
public:
	value_type();
	bool change(std::string data) override;
};



class container_manipulation: public Element{
public:
	bool change(std::string data) override;
};




#endif /* ELEMENTS_H_ */
