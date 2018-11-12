#include "header.h"
void putAvarage(float *avg, int *arrData, int size){
    int temp;
    int i;

    for(i=0;i<size;i++){
        temp+=*arrData+i;
    }
    *avg=(float)temp/(float)size;
}
