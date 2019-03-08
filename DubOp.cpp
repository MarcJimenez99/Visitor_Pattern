#include "DubOp.h"
using namespace std;

DubOp::DubOp(int num) {
	value = static_cast<double>(num);
}
DubOp::DubOp(double num) {
	value = num;
}
double DubOp::evaluate() {
	//cout << "dub eval " << endl;
	return value; 
}
string DubOp::stringify() {
	return to_string(value);
}
Base* DubOp::get_left() {
	return nullptr;
}
Base* DubOp::get_right() {
	return nullptr;
}
Iterator* DubOp::create_iterator(){
	NullIterator* iter = new NullIterator(this);
	return iter;
}
void DubOp::accept(CountVisitor* visitor) {
	visitor->visit_op();
}
