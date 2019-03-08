#include "BinaryIterator.h"

using namespace std;

BinaryIterator::BinaryIterator(Base* ptr) {
    this->self_ptr = ptr;
}
void BinaryIterator::first() {
    this->iter = this->self_ptr->get_left();
}
void BinaryIterator::next() {
    if (this->iter == this->self_ptr->get_left()) {
        this->iter = this->self_ptr->get_right();
    }
    else if (this->iter == this->self_ptr->get_right()) {
        this->iter = nullptr;
    }
    else {
        this->iter = nullptr;
    }
}
bool BinaryIterator::is_done() {
    if (this->iter == nullptr) {
        return true;
    }
    else {
        return false;
    }
}
Base* BinaryIterator::current() {
    return this->iter;
}