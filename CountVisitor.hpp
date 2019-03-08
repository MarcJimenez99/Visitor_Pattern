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
        int ops;
        int rands;
        int mults;
        int divs;
        int add;
        int sub;
        int pow;
        
        int ceil;
        int floor;
        int abs;
        int trunc;
        int paren;

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
            cout << "Number of Ops visited: " << endl;
            return this->ops;
        }
        void visit_rand() {
            ++this->rands;
        }
        int rand_count() {
            cout << "Number of Rands visited: " << endl;
            return this->rands;
        }
        void visit_mult() {
            ++this->mults;
        }
        int mult_count() {
            cout << "Number of Mults visited: " << endl;
            return this->mults;
        }
        void visit_div() {
            ++this->divs;
        }
        int div_count() {
            cout << "Number of Divs visited: " << endl;
            return this->divs;
        }
        void visit_add() {
            ++this->add;
        }
        int add_count() {
            cout << "Number of Adds visited: " << endl;
            return this->add;
        }
        void visit_sub() {
            this->sub++;
        }
        int sub_count() {
            cout << "Number of Subs visited: " << endl;
            return this->sub;
        }
        void visit_pow() {
            this->pow++;
        }
        int pow_count() {
            cout << "Number of Pows visited: " << endl;
            return this->pow;
        }
        void visit_ceil() {
            this->ceil++;
        }
        int ceil_count() {
            cout << "Number of Ceils visited: " << endl;
            return this->ceil;
        }
        void visit_floor() {
            this->floor++;
        }
        int floor_count() {
            cout << "Number of Floors visited: " << endl;
            return this->floor;
        }
        void visit_abs() {
            this->abs++;
        }
        int abs_count() {
            cout << "Number of Abs visited: " << endl;
            return this->abs;
        }
        void visit_trunc() {
            this->trunc++;
        }
        int trunc_count() {
            cout << "Number of Truncs visited: " << endl;
            return this->trunc;
        }
        void visit_paren() {
            this->paren++;
        }
        int paren_count() {
            cout << "Number of Parens visited: " << endl;
            return this->paren;
        }
};

#endif //__COUNT_VISITOR_HPP__