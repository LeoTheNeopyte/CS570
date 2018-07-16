#include "a3.h"


/*fuction that creates two threads
  1) to keep track of the time
  2) to keep print the time passed  
*/
void wallclock(int sec){
        
    pthread_t thread_1;
    pthread_t thread_2;
    
    pthread_create (&thread_1, NULL, (void *) &tracktime, NULL);
    pthread_create (&thread_2, NULL, (void *) &printtime, NULL);
    
    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);
    
}
/* Function used to when the program finish*/
void gracefulexit(){
    printf("Goodbye\n");
}

/* Function used to format/print  the time*/
void printtime(){
    while(sig==0){
        current_time = time(NULL);
        c_time_string = ctime(&current_time);
        printf("Current time is %s", c_time_string);
        sleep(1);
    }
}

/* Waits until the end of the program to execute goodbye message*/
void tracktime(){
    sleep(sec);
    gracefulexit();
    sig=1;
}
