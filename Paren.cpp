#include "Paren.h"
#include <string>

using namespace std;

Paren::Paren() {
    this->child = nullptr;
}
Paren::Paren(Base* child) {
    this->child = child;
}
double Paren::evaluate() {
    return (this->child)->evaluate();
}
string Paren::stringify() {
    string sent = ("(" + (this->child)->stringify() + ")");
    return sent;
}
Base* Paren::get_left() {
	return this->child;
}
Base* Paren::get_right() {
	return nullptr;
}
Iterator* Paren::create_iterator(){
	UnaryIterator* iter = new UnaryIterator(this);
	return iter;
}
void Paren::accept(CountVisitor* visitor) {
	visitor->visit_paren();
}
