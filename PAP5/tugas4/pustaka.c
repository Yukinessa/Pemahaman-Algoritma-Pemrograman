#include "pustaka.h"

int min_max_gap(int data[],int jml_data){
    int a;
    int min=data[0];
    int max=data[0];
    for(a=0;a<jml_data;a++){
        if(data[a]<min){
            min=data[a];
        }
    }
    for(a=0;a<jml_data;a++){
        if(data[a]>max){
            max=data[a];
        }
    }
    return max-min;
}
