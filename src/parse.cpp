#include <iostream>
#include <string>

using namespace std;

string parse(string user_input){
    string command_input;
    
    for(int i = 0; i < user_input.length(); i++){
        if(user_input.at(i) == '#'){
            //cout << "Comment found\n";
            command_input = user_input.erase(i,string::npos);
            //cout << "New string: " << command_input << "\n";
        }
    }
    
    return command_input;
}
