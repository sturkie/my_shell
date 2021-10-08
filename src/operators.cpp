#include "operators.h"

#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<cstring>

using namespace std;

Operators::Operators(){
    this->command = "";
}

Operators::Operators(string input){
    this->command = input;
}

bool Operators::isEmpty(){
    return false;
}

bool Operators::execute(){
    bool result = true;
    
    int t;
    char* args[128];
    int found = 0;
    string sub;
    
    char* char_input = new char[this->command.length() + 1];
    strcpy(char_input, this->command.c_str()); //convert input into a char arr
    
    char* at_input = strtok(char_input, " ");
    int k = 0;
    while(at_input != 0){ //adding at_input to args arr to execute
        args[k] = at_input;
        at_input = strtok(NULL, " ");
        k++;
    }
    args[k] = 0; //end of args
    
    pid_t pid = fork();
    if(pid == 0){
        if(execvp(args[0], args) == -1){
            perror("Error executing");
            exit(-1);
        }
    }
    if(pid > 0){
        if(wait(0) == -1){
            perror("Error in child");
            exit(-1);
        }
    }
    if(pid ==  -1){
        perror("Error forking");
        exit(-1);
    }
    else{
        waitpid(-1, &t, 0);
        delete[] char_input;
    }
    return true;
}

