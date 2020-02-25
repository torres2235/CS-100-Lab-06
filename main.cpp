#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "Decorator.hpp"
#include "Trunc.hpp"
#include "Ceil.hpp"
#include "Floor.hpp"
#include "Abs.hpp"
#include "Paren.hpp"

#include <iostream>

using namespace std;
int main() {
	Op* one = new Op(1.5);
        Op* three = new Op(3.3);
	
	Ceil* two = new Ceil(one);
	Floor* newThree = new Floor(three);
	
	Add* sum = new Add(two,newThree);
	Mult* product = new Mult(one, three);
        Paren* paren = new Paren(sum);
	Trunc* trunc = new Trunc(product);
	
        Mult* tester = new Mult(trunc, paren);

	cout << tester->stringify();

return 0;
}
