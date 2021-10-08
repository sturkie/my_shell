#ifndef BASE_H
#define BASE_H

#include <string>
using namespace std;

class Base {
    public:
        Base(){}; //constructor
        virtual void add_lhs(Base*) = 0;
        virtual void add_rhs(Base*) = 0;
        virtual bool isEmpty() = 0;
        virtual bool execute() = 0;
};

#endif
