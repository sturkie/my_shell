#ifndef OPERATORS_H
#define OPERATORS_H

#include "base.h"
#include <string>
#include <iostream>

using namespace std;

class Operators : public Base{
    public:
        Operators();
        Operators(string);
        string command;
        void add_lhs(Base*){};
        void add_rhs(Base*){};
        bool isEmpty();
        bool execute();
    
};

#endif
