#include<iostream>
#include "parse.cpp"

using namespace std;

int main(){
    
    bool exit = false;
    string user_input = "";
    
    while(!exit){
        cout << "$ ";
        getline(cin, user_input);
        if(user_input == "exit"){
            exit = true;
        }
        else{
            //Parsing through string
        }
    }
    cout << "Exiting my_shell\n";
    return 0;
}
