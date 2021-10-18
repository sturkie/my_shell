#ifndef COMMAND_H
#define COMMAND_H

#include "base.h"
#include <string>
#include <iostream>

using namespace std;

class Command : public Base{
    public:
        Command();
        Command(string);
        string command;
        void add_lhs(Base*){};
        void add_rhs(Base*){};
        bool isEmpty();
        bool execute();
    
};

#endif
