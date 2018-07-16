//
//  a1.h
//  a1
//
//  Created by Leonardo Gomez on 6/6/18.
//  Copyright © 2018 LeoTheNeo. All rights reserved.
//

#ifndef a1_h
#define a1_h

#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

static FILE *fp;
static sem_t flag;

static char* face[14] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

void diamond_runner(void);
void club_runner(void);
void heart_runner(void);
void spade_runner(void);

#endif /* a1_h */
