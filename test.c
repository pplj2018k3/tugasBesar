#include <stdio.h>
#include <stdlib.h>

#include "lib/kel13.h"

int main(){
    initFile("fileout.txt");
    for(int i=0; i<20; i++){
        char tmp[32];
        sprintf(tmp, "test%d", i);
        processingData(tmp);
        saveData(tmp);
    }
    endFileLog();
}