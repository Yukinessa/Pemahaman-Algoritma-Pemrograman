/*
    NAMA = Kun Amrin Amanu
    NIM = A11.2018.10333
*/

#include "header.h"

int main()
{
    int *arr1, *arr2, *arr3, *arr4;
    arr1=arr2=arr3=arr4=malloc(sizeof(*arr1));

    initDynArray(&arr1,6);
    int i;
    for(i=1;i<=6;i++){
        printf("%d,",i);
    }
    return 0;
}
