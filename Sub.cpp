#ifndef SUB_H
#define SUB_H

#include "base.hpp"
#include "Op.hpp"
#include "Rand.hpp"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "CountVisitor.hpp"

class Sub : public Base {

	private:
		Base* left;
		Base* right;
	public:
		Sub(Base* v1, Base* v2) {
			left = v1;
			right = v2;
		}
		double evaluate () {
			return left->evaluate() - right->evaluate();
		}
		string stringify() {
			string sent;
			sent = left->stringify() + " + " + right->stringify();
			return sent;
		}
		Base* get_left() {
			if (!this->left) {
				return nullptr;
			}
			else {
				return this->left;
			}
		}
		Base* get_right() {
			if (!this->right) {
				return nullptr;
			}
			else {
				return this->right;
			}
		}
		Iterator* create_iterator(){
    		BinaryIterator* iter = new BinaryIterator(this);
    		return iter;
		}
		void accept(CountVisitor* visitor) {
    		visitor->visit_sub();
    	}
}; 

#endif
