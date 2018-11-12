#include "pustaka.h"

void min_max(int data[],int jml_data, int *min, int *max){
    int a;
    *min=data[0];
    *max=data[0];
    for(a=0;a<jml_data;a++){
        if(data[a]<*min){
            *min=data[a];
        }
    }
    for(a=0;a<jml_data;a++){
        if(data[a]>*max){
            *max=data[a];
        }
    }
}
