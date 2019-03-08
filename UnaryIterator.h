#ifndef __UNARYITERATOR_H__
#define __UNARYITERATOR_H__

#include <iosfwd>
#include <string>
#include <iostream>
#include "Iterator.hpp"

using namespace std;

class UnaryIterator : public Iterator {
    private:
        Base* self_ptr;
        Base* iter;
    public:
        //UnaryIterator() { this->self_ptr = nullptr };
        UnaryIterator(Base* );
        void first();
        void next();
        bool is_done();
        Base* current();
};

#endif