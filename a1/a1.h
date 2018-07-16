/*
 Prithipal Khalsa, cssc1182
 Leonardo Gomez, cssc1194
 Janae Waldon, cssc1183
 CS570 Summer 2018
 Assignment #1 - Multithreading
 San Diego State University
 */

#ifndef A1_H
#define A1_H

#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

static FILE *fp;
static sem_t flag;

static char* face[14] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

void diamond_runner();
void club_runner();
void heart_runner();
void spade_runner();

#endif
