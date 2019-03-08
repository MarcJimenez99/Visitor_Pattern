#include "UnaryIterator.h"

using namespace std;

UnaryIterator::UnaryIterator(Base* ptr) {
    this->self_ptr = ptr;
}
void UnaryIterator::first() {
    this->iter = this->self_ptr->get_left();
}
void UnaryIterator::next() {
    if (this->iter != nullptr) {
        iter = nullptr;
    }
    else {
        if (this->self_ptr->get_left() != nullptr) {
            iter = this->self_ptr->get_left(); 
        }
        else if (this->self_ptr->get_right() != nullptr) {
            iter = this->self_ptr->get_right();
        }
    }
}
bool UnaryIterator::is_done() {
    if (this->iter == nullptr) {
        return true;
    }
    else {
        return false;
    }
}
Base* UnaryIterator::current() {
    return this->iter;
}