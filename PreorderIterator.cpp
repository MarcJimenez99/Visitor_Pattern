#include "PreorderIterator.h"

using namespace std;


void PreorderIterator::first() {
    // Iterator* iter = new Iterator(this->self_ptr)
    Iterator* iter = this->self_ptr->create_iterator();
    if (iter) {
        iter->first();
        while (!StackIter.empty()) {
            StackIter.pop();
        }
        StackIter.push(iter);
    }
}

void PreorderIterator::next() {
    Iterator* iter = StackIter.top()->current()->create_iterator();
    iter->first();
    StackIter.push(iter);
    if (!StackIter.empty()) {
        while (StackIter.top()->is_done()) {
            StackIter.pop();
            StackIter.top()->next();
        }
    }
}

bool PreorderIterator::is_done() {
    if (StackIter.empty()) {
        return true;
    }
    else {
        return false;
    }
}
Base* PreorderIterator::current() {
    if (StackIter.empty()) {
        return nullptr;
    }
    else {
        return StackIter.top()->current();
    }
}











