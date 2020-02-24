#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "Decorator.hpp"
#include <math.h>

class Abs : public Decorator {
	private:
		Base* temp;

	public:
		Abs(Base* tempBase) : Decorator() {
			temp = tempBase;
		}

		virtual double evaluate() {
			return abs(temp->evaluate());
		}

		virtual std::string stringify() {
			return "temp";
		}
};

#endif //__ABS_HPP__
