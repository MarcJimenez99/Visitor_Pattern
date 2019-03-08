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
#include "Abs.h"
#include "Trunc.h"
#include "Paren.h"
#include "Decorator.hpp"
#include "BinaryIterator.h"
#include "NullIterator.h"
#include "UnaryIterator.h"
#include "PreorderIterator.h"
#include "CountVisitor.hpp"
#include <list>
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>

TEST(SingleOperation, CeilRoot) {
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
TEST(SingleOperation, TruncRoot) {
        DubOp* x = new DubOp(3.0);
        DubOp* y = new DubOp(4.0);
        Mult* m1 = new Mult(x, y);
        Trunc* c1 = new Trunc(m1);
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
TEST(SingleOperation, ParenRoot) {
        DubOp* x = new DubOp(3.0);
        DubOp* y = new DubOp(4.0);
        Mult* m1 = new Mult(x, y);
        Paren* c1 = new Paren(m1);
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
TEST(SingleOperation, AbsRoot) {
        DubOp* x = new DubOp(3.0);
        DubOp* y = new DubOp(4.0);
        Mult* m1 = new Mult(x, y);
        Abs* c1 = new Abs(m1);
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
TEST(SingleOperation, FloorRoot) {
        DubOp* x = new DubOp(3.0);
        DubOp* y = new DubOp(4.0);
        Mult* m1 = new Mult(x, y);
        Floor* c1 = new Floor(m1);
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
TEST(MultipleOperation, MultOps1) {
	DubOp* x = new DubOp(-1.0);
	DubOp* y = new DubOp(3.0);
	Pow* p1 = new Pow(x, y);
	DubOp* xx = new DubOp(-4.0);
	Mult* mult = new Mult(p1, xx);
	Ceil* ceil = new Ceil(mult);
	CountVisitor* visitor = new CountVisitor();
	PreorderIterator* iter = new PreorderIterator(ceil);
	iter->first();
	iter->current()->accept(visitor);
	iter->next();
	iter->current()->accept(visitor);
	iter->next();
        iter->current()->accept(visitor);
	iter->next();
        iter->current()->accept(visitor);
	iter->next();
        iter->current()->accept(visitor);
	EXPECT_EQ(1, visitor->pow_count()); 
	EXPECT_EQ(1, visitor->mult_count());
	EXPECT_EQ(3, visitor->op_count());
}
TEST(MultipleOperation, MultOps2) {
        DubOp* x = new DubOp(-1.0);
        DubOp* y = new DubOp(3.0);
        Div* p1 = new Div(x, y);
        DubOp* xx = new DubOp(-4.0);
        Add* add = new Add(p1, xx);
	DubOp* yy = new DubOp(-6.0);
	Sub* sub = new Sub(add, yy);
        Ceil* ceil = new Ceil(sub);
        CountVisitor* visitor = new CountVisitor();
        PreorderIterator* iter = new PreorderIterator(ceil);
        iter->first();
        iter->current()->accept(visitor);
        iter->next();
        iter->current()->accept(visitor);
        iter->next();
        iter->current()->accept(visitor);
        iter->next();
        iter->current()->accept(visitor);
        iter->next();
        iter->current()->accept(visitor);
	iter->next();
        iter->current()->accept(visitor);
	iter->next();
        iter->current()->accept(visitor);
        EXPECT_EQ(1, visitor->div_count());
        EXPECT_EQ(1, visitor->add_count());
	EXPECT_EQ(1, visitor->sub_count());
        EXPECT_EQ(4, visitor->op_count());
}



int main(int argc, char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
