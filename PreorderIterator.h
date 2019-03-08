#ifndef __PREORDERITERATOR_H__
#define __PREORDERITERATOR_H__

#include <stack>
#include "Iterator.hpp"

using namespace std;

class PreorderIterator : public Iterator {
    private:
        Base* self_ptr;
        //Base* PreorderIterator;
        stack<Iterator* > StackIter;
    public:
        //PreorderIterator() { this->self_ptr = nullptr; }        
        PreorderIterator(Base* ptr) { this->self_ptr = ptr; }
        void first();
        void next();
        bool is_done();
        Base* current();
            
};

#endif