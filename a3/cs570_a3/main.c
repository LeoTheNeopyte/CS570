#include <stdio.h>

int sec;

int main(int argc, char const *argv[]){
    const char* userinput;
    if(argc < 1){
        printf("Not enough arguments. \n");     //No executable inuputted
        return 0;
    }
    else if(argc > 3){
        printf("Too many arguments! \n");
        // limiting user input to 2 arguments
        return 0;
    }
    
    //argv is blank
    if(argc==1){
        sec = 25;                      // if only one arg, default time = 25
    }
    else{
        userinput= argv[1];
        sec = atoi(userinput);
    }
    wallclock(sec);
    printtime();
    return 0;
}// main functions

