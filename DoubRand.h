#ifndef DOUBRAND_H
#define DOUBRAND_H

#include "Rand.hpp"
#include "NullIterator.h"
 
using namespace std;

class DoubRand : public Rand {
	private:
		double value = 0.0;
	public:
		DoubRand();
		double evaluate ();
		string stringify();
		Base* get_left();
        Base* get_right();
        Iterator* create_iterator();
        void accept(CountVisitor* );
};

#endif
