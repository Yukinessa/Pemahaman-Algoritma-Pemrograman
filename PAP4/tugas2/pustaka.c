#include "pustaka.h"

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void print_array(int data[], int jml_data){
    int a;
    for(a=0;a<jml_data;a++){
        printf("%d ",data[a]);
    }
    puts("");
}

void selection_sort1(int data[], int jml_data){
    int a,b,min;
    for(a=0;a<jml_data;a++){
        min=a;
        for(b=a;b<jml_data;b++){
            if(data[min]>data[b]){
                min=b;
            }
        }
        swap(&data[min],&data[a]);
        print_array(data,jml_data);
    }
}
