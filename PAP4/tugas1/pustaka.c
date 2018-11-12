#include "header.h"

void print_array(int data[],int jml_data){
    int a;
    for(a=0;a<jml_data;a++){
        printf("%d ",data[a]);
    }
}

void compress_array(int data[],int jml_data){
    int arr[255]={NULL};

    int a,b=0;
    for(a=0;a<jml_data;a++){
        if(data[a]!=0){
            arr[b]=data[a];
            b++;
        }
    }
    print_array(arr,jml_data);
}
