#ifndef __NULLITERATOR_H__
#define __NULLITERATOR_H__

#include <iosfwd>
#include <string>
#include <iostream>

using namespace std;

class NullIterator : public Iterator {
    private:
        Base* self_ptr;
        Base* iter;
    public:
        //NullIterator() { this->self_ptr = nullptr; }
        NullIterator(Base* ptr);
        void first();
        void next();
        bool is_done();
        Base* current();
};

#endif