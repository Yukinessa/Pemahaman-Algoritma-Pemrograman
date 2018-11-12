#include "pustaka.h"

void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

void print_array(int arr[],int jml_data){
    int a=0;
    while(a<jml_data){
        printf("%d ",arr[a]);
        a++;
    }
    puts("");
}

void selection_sort2(int arr[],int jml_data){
    int a,b,sort,min;
    for(a=0;a<jml_data-1;a++) {
        sort=a+1;
        min=a;
        for(b=a+1;b<jml_data;b++) {
            sort+=arr[b-1]<=arr[b];
            if(arr[min]>arr[b])
                min=b;
        }
        if(sort==jml_data)
           break;
        if (min!=a) {
            swap(&arr[min],&arr[a]);
        }
        print_array(arr, jml_data);
    }
}
