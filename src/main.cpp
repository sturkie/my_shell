#include<iostream>

#include "parse.cpp"
#include "base.h"
#include "command.h"


using namespace std;

//execute command
void execute_command(string i){
    Base* cmd = new Command(i);
    cmd->execute();
}

int main(){
    
    bool exit = false;
    string user_input = "";
    string command_input = "";
    
    while(!exit){
        cout << "$ ";
        getline(cin, user_input);
        if(user_input == "exit"){
            exit = true;
        }
        else{
            //Parsing through string, handled in parse.cpp
            command_input = parse(user_input);
            
            //execute command
            execute_command(command_input);
        }
    }
    return 0;
}
