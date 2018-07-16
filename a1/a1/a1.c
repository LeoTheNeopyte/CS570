//
//  a1.c
//  a1
//
//  Created by Leonardo Gomez on 6/6/18.
//  Copyright © 2018 LeoTheNeo. All rights reserved.
//

#include "a1.h"

void diamond_runner(){
    
    int i=0;
    for(i=0; i<13; i++) {//loop 13
        usleep(125000);
        sem_wait(&flag); //decrement semaphore
        
        //open up file to write diamond cards
        fp= fopen("stack.txt", "a");
        if (fp!=NULL){
            fprintf (fp, "Diamond %s", face[i]);
            fprintf(fp," %d\n",i*125 );
        }
        fclose (fp);
        sem_post(&flag); //increment semaphore
    }
    
}

void club_runner(){
    
    int j=0;
    for(j=0; j<13; j++) {//loop 13
        usleep(250000);
        sem_wait(&flag); //decrement semaphore
        
        //open up file to write club cards
        fp= fopen("stack.txt", "a");
        if (fp!=NULL){
            fprintf (fp, "Club %s",face[j]);
            fprintf(fp," %d \n",j*250 );
        }
        fclose (fp);
        sem_post(&flag); //increment semaphore
    }
}

void heart_runner(){
    
    int k=0;
    for(k=0; k<13; k++) {//loop 13
        
        sem_wait(&flag); //decrement semaphore BEFORE UNSLEEP?
        usleep(500000);
        
        //open up file to write heart cards
        fp= fopen("stack.txt", "a");
        if (fp!=NULL){
            fprintf (fp, "Heart %s ",face[k]);
            fprintf(fp," %d \n",k*500 );
        }
        fclose (fp);
        sem_post(&flag); //increment semaphore
    }
}

void spade_runner(){
    
    int l=0;
    for(l=0; l<13; l++) {//loop 13
        usleep(750000);
        sem_wait(&flag); //decrement semaphore
        
        //open up file to write spade cards
        fp= fopen("stack.txt", "a");
        if (fp!=NULL){
            fprintf (fp, "Spade %s ",face[l]);
            fprintf(fp," %d \n",l*750 );
        }
        fclose (fp);
        sem_post(&flag); //increment semaphore
    }
}
