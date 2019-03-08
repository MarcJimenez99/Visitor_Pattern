#include "Abs.h"

Abs::Abs(){
	this->child = nullptr;
}

Abs::Abs(Base* child) {
	this->child = child;
}
double Abs::evaluate(){
	return fabs((this->child)->evaluate());
}
string Abs::stringify() {
	return (this->child)->stringify();
}
Base* Abs::get_left() {
	return this->child;
}
Base* Abs::get_right() {
	return nullptr;
}
Iterator* Abs::create_iterator(){
	UnaryIterator* iter = new UnaryIterator(this);
	return iter;
}
void Abs::accept(CountVisitor* visitor) {
	visitor->visit_abs();
}