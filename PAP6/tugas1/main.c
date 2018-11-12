#include <stdio.h>
#include <stdlib.h>

void print_array(int array[],int min, int max){
    int a;
    for(a=min;a<max+1;a++){
        printf("%d ",array[a]);
    }
    puts("");
}


int binary_search(int angka, int data[], int jml_data){

    int min=0;
    int max=jml_data-1;
    int med=(int)(max+min)/2;

    while(min<=max){
        med=(int)(max+min)/2;
        print_array(data,min,max);
        if(angka==data[med]){
            printf("%d",data[med]);
            return 1;
        }
        else if(angka>data[med]){
            min=med+1;
        }
        else if(angka<data[med]){
            max=med-1;
        }
    }
    return 0;
}

int main()
{
    int list1[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    binary_search(3,list1,10);

    return 0;
}
