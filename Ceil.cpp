#include "Ceil.h"

Ceil::Ceil() {
	this->child = nullptr;
}
Ceil::Ceil(Base* child) {
	this->child = child;
}
double Ceil::evaluate() {
	return ceil((this->child)->evaluate());
}
string Ceil::stringify() {
	return (this->child)->stringify();
}
Base* Ceil::get_left() {
	return this->child;
}
Base* Ceil::get_right() {
	return nullptr;
}
Iterator* Ceil::create_iterator(){
	UnaryIterator* iter = new UnaryIterator(this);
	return iter;
}
void Ceil::accept(CountVisitor* visitor) {
	visitor->visit_ceil();
}