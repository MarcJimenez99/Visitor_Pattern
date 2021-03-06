#ifndef __COUNT_VISITOR_HPP__
#define __COUNT_VISITOR_HPP__

#include "base.hpp"
#include "Op.hpp"
#include "Rand.hpp"
#include "Decorator.hpp"
#include <iostream>
#include <iosfwd>
#include <string>

using namespace std;

class CountVisitor {
    private:
        int ops = 0;
        int rands = 0;
        int mults = 0;
        int divs = 0;
        int add = 0;
        int sub = 0;
        int pow = 0;
        
        int ceil = 0;
        int floor = 0;
        int abs = 0;
        int trunc = 0;
        int paren = 0;

    public:
        CountVisitor() {
            int ops = 0, rands = 0, mults = 0, divs = 0, add = 0, sub = 0, pow = 0, ceil = 0, floor = 0, abs = 0, trunc = 0, paren = 0;
        }  
        void PrintVisitor() {
            cout << "Ops: " << this->ops << endl;
            cout << "Rands: " << this->rands << endl;
            cout << "Mults: " << this->mults << endl;
            cout << "Divs: " << this->divs << endl;
            cout << "Add: " << this->add << endl;
            cout << "Sub: " << this->sub << endl;
            cout << "Pow: " << this->pow << endl;
            
            cout << "Ceil: " << this->ceil << endl;
            cout << "Floor: " << this->floor << endl;
            cout << "Abs: " << this->abs << endl;
            cout << "Trunc: " << this->trunc << endl;
            cout << "Paren: " << this->paren << endl;
        }
    
        void visit_op() {
            ++this->ops;
        }
        int op_count() {
		return this->ops;
        }
        void visit_rand() {
            ++this->rands;
        }
        int rand_count() {
            return this->rands;
        }
        void visit_mult() {
            ++this->mults;
        }
        int mult_count() {
		return this->mults;
        }
        void visit_div() {
            ++this->divs;
        }
        int div_count() {
            return this->divs;
        }
        void visit_add() {
            ++this->add;
        }
        int add_count() {
            return this->add;
        }
        void visit_sub() {
            this->sub++;
        }
        int sub_count() {
            return this->sub;
        }
        void visit_pow() {
            this->pow++;
        }
        int pow_count() {
            return this->pow;
        }
        void visit_ceil() {
            this->ceil++;
        }
        int ceil_count() {
            return this->ceil;
        }
        void visit_floor() {
            this->floor++;
        }
        int floor_count() {
            return this->floor;
        }
        void visit_abs() {
            this->abs++;
        }
        int abs_count() {
            return this->abs;
        }
        void visit_trunc() {
            this->trunc++;
        }
        int trunc_count() {
            return this->trunc;
        }
        void visit_paren() {
            this->paren++;
        }
        int paren_count() {
            return this->paren;
        }
};

#endif //__COUNT_VISITOR_HPP__
