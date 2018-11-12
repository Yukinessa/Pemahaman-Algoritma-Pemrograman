#include "pustaka.h"

void swap(int *a,int *b){
    int swapa;
    swapa=*a;
    *a=*b;
    *b=swapa;
}

void cetak(int array[],int jml_data){
    int a;
    a=0;
    while(a<jml_data){
        printf("%d ",array[a]);
        a++;
    }
    puts(" ");
}

void bubble_sort1(int array[], int jml_data){
    int a,b;
    for(a=0;a<jml_data;a++){
        for(b=0;b<jml_data-1;b++){
            if(array[b]>array[b+1]){
                swap(&array[b],&array[b+1]);
            }
        }
        cetak(array,5);
    }
}
