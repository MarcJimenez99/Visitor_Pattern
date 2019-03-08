#ifndef DUBOP_H
#define DUBOP_H

#include "Op.hpp"
#include "base.hpp"
#include "NullIterator.h"

class DubOp : public Op {

	private: 
		double value = 0;
	public:
		DubOp(int num);
		DubOp(double num);
		double evaluate();
		string stringify();
		Base* get_left();
        Base* get_right();
        Iterator* create_iterator();
        void accept(CountVisitor* );
};

#endif
