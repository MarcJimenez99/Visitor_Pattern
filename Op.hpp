#ifndef OP_HPP
#define OP_HPP

#include "base.hpp"
#include "CountVisitor.hpp"


class Op : public Base {

	public:
		Op() { };
		virtual double evaluate() = 0;
		virtual string stringify() = 0;
};

#endif
