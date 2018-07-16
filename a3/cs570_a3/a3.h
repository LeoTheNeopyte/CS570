#ifndef a2_h
#define a2_h

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int sec;
int sig=0;

time_t current_time;
char* c_time_string;
void printtime();
void gracefulexit();
void tracktime();

void wallclock(int sec);

#endif /* end of a2_h */
