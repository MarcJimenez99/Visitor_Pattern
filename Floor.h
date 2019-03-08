#ifndef FLOOR_H
#define FLOOR_H

#include "base.hpp"
#include <cmath>
#include <math.h>
#include "UnaryIterator.h"

class Floor : public Base{
	private:
		Base* child = nullptr;
	public:
		Floor();
		Floor(Base* );
		double evaluate();
		string stringify();
		Base* get_left();
        Base* get_right();
        Iterator* create_iterator();
        void accept(CountVisitor* );
};
#endif	