#include "Trunc.h"

using namespace std;

Trunc::Trunc() {
    this->child = nullptr;
}
Trunc::Trunc(Base* child) {
    this->child = child;
}
double Trunc::evaluate() {
    return (this->child)->evaluate();
}
string Trunc::stringify() {
    return to_string(this->child->evaluate());
}
Base* Trunc::get_left() {
	return this->child;
}
Base* Trunc::get_right() {
	return nullptr;
}
Iterator* Trunc::create_iterator(){
	UnaryIterator* iter = new UnaryIterator(this);
	return iter;
}
void Trunc::accept(CountVisitor* visitor) {
	visitor->visit_trunc();
}
