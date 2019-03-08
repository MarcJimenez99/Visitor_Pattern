#include"DoubRand.h"


DoubRand:: DoubRand() {
	value = rand() % 100; 
}
double DoubRand :: evaluate () {
	return value;
}
		
string DoubRand :: stringify() {
	return to_string(value); 
}
Base* DoubRand::get_left() {
	return nullptr;
}
Base* DoubRand::get_right() {
	return nullptr;
}
Iterator* DoubRand::create_iterator(){
	NullIterator* iter = new NullIterator(this);
	return iter;
}
void DoubRand::accept(CountVisitor* visitor) {
	visitor->visit_rand();
}
