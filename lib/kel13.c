#include <stdio.h>
#include <stdlib.h>

#include "kel13.h"

static FILE* fdout;
static char isFileOpen = 0;

void initFile(char* filename){
    fdout = fopen(filename, "w+");
    isFileOpen = 1;
}

void processingData(char* data){
    printf("Data: %s\n", data);
}

void saveData(char* Data){
    fprintf(fdout, "Data: %s\n", Data);
}

void endFileLog(){
    if (isFileOpen){
        fclose(fdout);
        isFileOpen = 0;
    }
}