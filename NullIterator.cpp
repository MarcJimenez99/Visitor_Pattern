#include "NullIterator.h"

using namespace std;

NullIterator::NullIterator(Base* ptr) {
    this->self_ptr = ptr;
}
void NullIterator::first() { }
void NullIterator::next() { }
bool NullIterator::is_done() {
    return true;
}
Base* NullIterator::current() {
    this->iter = nullptr;
    return iter;
}