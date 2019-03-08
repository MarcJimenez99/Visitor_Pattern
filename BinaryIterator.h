#ifndef __BINARYITERATOR_H__
#define __BINARYITERATOR_H__

#include <iosfwd>
#include <string>
#include <iostream>
#include "Iterator.hpp"
#include "base.hpp"

using namespace std;

class BinaryIterator : public Iterator {
    private:
        Base* self_ptr;
        Base* iter;
    public:
        //BinaryIterator() { this->self_ptr = nullptr; }
        BinaryIterator(Base* );
        void first();
        void next();
        bool is_done();
        Base* current();
};

#endif