//
//  a2.h
//  cs570_a2
//
//  Created by Leonardo Gomez on 6/20/18.
//  Copyright © 2018 LeoTheNeo. All rights reserved.
//

#ifndef a2_h
#define a2_h

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>



void createfile(char* filename);
void readfile(char* filename);
int writefile(char* filename);
void append(char* filename);
void insert(char* filename, long offset);
void overWrite(char* filename);

void createDirectory(char* dirname);

void printfilestatus(char* filename);

void printdirlisting(char* filedir);

void sortalpha();

void reversesortalpha();

void menu();
void performMenuInstructions();

#endif /* a2_h */
