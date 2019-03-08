#ifndef CEIL_H
#define CEIL_H

#include "base.hpp"
#include <cmath>
#include <math.h>
#include "UnaryIterator.h"
#include "CountVisitor.hpp"

class Ceil : public Base{
	private:
		Base* child = nullptr;
	public:
		Ceil();
		Ceil(Base* );
		double evaluate();
		string stringify();
		Base* get_left();
        Base* get_right();
        Iterator* create_iterator();
        void accept(CountVisitor* );
};
#endif
