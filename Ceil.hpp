#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "Decorator.hpp"
#include <math.h>

class Ceil : public Decorator { 
	private:
		Base* temp;
		double t;
	public:
		Ceil(Base* tempBase) : Decorator() {
			temp = tempBase;
		}

		virtual double evaluate() {
			
			return ceil(temp->evaluate());

		}
		
		virtual std::string stringify() {
			return "temp";
		}
};

#endif //__CEIL_HPP
