#include "header.h"

int n=0;
void rec_selection_sort(int data[], int arrSize){
    if(arrSize<0){
        return;
    }else{
        int min;
        min=arrSize;
        rec_selection_sort(data,arrSize-1);
        for(n=0;n<arrSize;n++){
            if(data[n]>data[arrSize]){
                min=n;
                data[arrSize]=data[arrSize]+data[min];
                data[min]=data[arrSize]-data[min];
                data[arrSize]=data[arrSize]-data[min];
            }
        }
        //printf("%d %d %d\n",arrSize,n,min);
    }
}
