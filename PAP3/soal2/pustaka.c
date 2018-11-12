#include "pustaka.h"

int cek_urut(int data[], int jml_data){
    int a,b,swap;
    int array[255]={0};

    for(a=0;a<jml_data;a++){
        array[a]=data[a];
    }

    for(a=0;a<jml_data;a++){
        for(b=a+1;b<jml_data;b++){
            if(array[b]<array[a]){
                swap=array[b];
                array[b]=array[a];
                array[a]=swap;
            }
        }
    }

    for(a=0;a<jml_data;a++){
        if(array[a]!=data[a]){
            return 0;
        }
    }
    return 1;
}
