#ifndef PAREN_H
#define PAREN_H

#include "base.hpp"
#include <string>
#include "UnaryIterator.h"
#include "CountVisitor.hpp"

using namespace std;

class Paren : public Base {
    protected:
        Base* child;
    public:
        Paren();
        Paren(Base* );
        double evaluate();
        string stringify();
        Base* get_left();
        Base* get_right();
        Iterator* create_iterator();
        void accept(CountVisitor* );
};

#endif
