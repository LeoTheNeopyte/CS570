#include "a1.c"

int main (int argc, char const *argv[]){
    //create stack.txt
    
    fp= fopen("stack.txt", "a");
    fprintf(fp, "The PID is: %d\n", getpid());
    fclose (fp);//close stack.txt
    
    sem_init(&flag, 0, 13);//create semaphore
    //create 4 threads
    pthread_t thread_1;
    pthread_t thread_2;
    pthread_t thread_3;
    pthread_t thread_4;
    
    pthread_create (&thread_1, NULL, (void *) &diamond_runner, NULL);
    pthread_create (&thread_2, NULL, (void *) &club_runner, NULL);
    pthread_create (&thread_3, NULL, (void *) &heart_runner, NULL);
    pthread_create (&thread_4, NULL, (void *) &spade_runner, NULL);
    
    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);
    pthread_join(thread_3, NULL);
    pthread_join(thread_4, NULL);
    
    sem_destroy(&flag);
    //TODO destroy exit and print exit statement
    
    printf("All threads have been ran. Goodbye!\n");
    printf("(Open stack.txt to see output)\n");
}
