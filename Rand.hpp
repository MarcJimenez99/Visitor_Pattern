#ifndef RAND_H
#define RAND_H
#include "base.hpp"
#include "CountVisitor.hpp"
class Rand : public Base {
	private:
		double value = 0.0;
	public:
		Rand() {
			value = static_cast<double>(rand() % 100); 
		}
		virtual double evaluate() = 0;
		virtual string stringify() = 0;
};

#endif
