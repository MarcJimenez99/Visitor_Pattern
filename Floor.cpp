#include "Floor.h"
#include <math.h>

Floor::Floor() {
	this->child = nullptr;
}
Floor::Floor(Base* child) {
	this->child = child;
}
double Floor::evaluate() {
	return floor((this->child)->evaluate());
}
string Floor::stringify() {
	return (this->child)->stringify();
}
Base* Floor::get_left() {
	return this->child;
}
Base* Floor::get_right() {
	return nullptr;
}
Iterator* Floor::create_iterator(){
	UnaryIterator* iter = new UnaryIterator(this);
	return iter;
}
void Ceil::Floor(CountVisitor* visitor) {
	visitor->visit_floor();
}