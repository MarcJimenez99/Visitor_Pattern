#ifndef DECORATOR_H
#define DECORATOR_H

#include "base.hpp"

class Base;

class Decorator : public Base {
        private:
                Base* set = nullptr;
        public:
                Decorator() { };
                double evaluate() = 0;
                string stringify() = 0;
};
#endif
		

