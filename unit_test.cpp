#include "gtest/gtest.h"
#include "base.hpp"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Rand.hpp"
#include "Op.hpp"
#include "DubOp.h"
#include "DoubRand.h"
#include "Ceil.h"
#include "Floor.h"
#include "Decorator.hpp"
#include "BinaryIterator.h"
#include "NullIterator.h"
#include "UnaryIterator.h"
#include "PreorderIterator.h"
#include <list>
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>

TEST(SingleCommand, CeilRoot) {
	DubOp* x = new DubOp(3.0);
	DubOp* y = new DubOp(4.0);
	Mult* m1 = new Mult(x, y);
	Ceil* c1 = new Ceil(m1);
	CountVisitor* visitor = new CountVisitor();
	PreorderIterator* iter = new PreorderIterator(c1);
	iter->first();
	iter->current()->accept(visitor);
	iter->next();
	iter->current()->accept(visitor);
	iter->next();
	iter->current()->accept(visitor);
	EXPECT_EQ(2, visitor->op_count());
	EXPECT_EQ(1, visitor->mult_count());
}

int main(int argc, char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
