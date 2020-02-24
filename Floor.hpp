#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include "lab-04/base.hpp"
#include <math.h>

class Floor : public Decorator {
	private:
		Base* temp;

	public:
		Floor(Base* tempBase) : Decorator() {
			temp = tempBase;
		}

		virtual double evaluate() {
			return floor(temp->evaluate());
		}

		virtual std::string stringify() {
			return "temp";
		}

};

#endif //__FLOOR_HPP__
