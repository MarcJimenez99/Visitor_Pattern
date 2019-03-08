#include "base.hpp"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Ceil.h"
#include "Floor.h"
#include "Abs.h"
#include "Trunc.h"
#include "Paren.h"
#include "Decorator.hpp"
#include "Rand.hpp"
#include "Op.hpp"
#include "DubOp.h"
#include "DoubRand.h"
#include "Iterator.hpp"
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

using namespace std;

int main(){
    // DubOp* op1 = new DubOp(4);
    // cout << "1" << endl;
    // DubOp* op2 = new DubOp(6);
    // cout << "1" << endl;
    // Add* a1 = new Add(op1,op2);
    // cout << "1" << endl;
    // DubOp* op3 = new DubOp(7);
    // cout << "1" << endl;
    // Add* root = new Add(a1, op3);
    // cout << "1" << endl;
    // Ceil* c = new Ceil(root);
    // cout << "1" << endl;
    // PreorderIterator* tree = new PreorderIterator(c);
    // cout << "1" << endl;
    // tree->first();
    // cout << "1" << endl;
    // cout << tree->current()->evaluate() << endl;
    // cout << "1" << endl;
    
    DubOp* x = new DubOp(3.5);
    DubOp* y = new DubOp(-4.3);
    
    Add* a1 = new Add(x, y);
    
    Ceil* c1 = new Ceil(a1);
    CountVisitor* visitor = new CountVisitor();
    
    cout << c1->stringify() << endl;
    
    PreorderIterator* iter = new PreorderIterator(c1);
    

    iter->first();
    iter->current()->accept(visitor);
    cout << "1" << endl;
    iter->next();
    iter->current()->accept(visitor);
    cout << "2" << endl;
    iter->next();
    iter->current()->accept(visitor);
	cout << "3" << endl;
	cout << "Ops: " << visitor->op_count() << endl;
	cout << "Add: " << visitor->add_count() << endl;
    
   
    
}

