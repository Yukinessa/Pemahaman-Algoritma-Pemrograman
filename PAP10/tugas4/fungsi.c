#include "header.h"

void printArray(int *arrData, int size){
    int i;
    for(i=0;i<size;i++){
        if(i==size-1){
            printf("%d\n",*arrData+i);
        }
        else{
            printf("%d-",*arrData+i);
        }
    }
}
