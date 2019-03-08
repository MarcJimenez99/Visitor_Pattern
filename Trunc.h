#ifndef TRUNC_H
#define TRUNC_H

#include "base.hpp"
#include <string>
#include "UnaryIterator.h"

using namespace std;

class Trunc : public Base {
    protected:
        Base* child;
    public:
        Trunc();
        Trunc(Base* );
        double evaluate();
        string stringify();
        Base* get_left();
        Base* get_right();
        Iterator* create_iterator();
        void accept(CountVisitor* );
};

#endif