#include<iostream>

#include "parse.cpp"
#include "command.h"


using namespace std;

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
            //Parsing through string
            command_input = parse(user_input);
        }
    }
    cout << "Exiting my_shell\n";
    return 0;
}
