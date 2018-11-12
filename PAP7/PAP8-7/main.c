#include "header.h"
/*
    NAMA = Kun Amrin Amanu
    NIM = A11.2017.10333
*/
int main()
{
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 5, 14, 6, 22};

    rec_selection_sort(data1, (sizeof(data1)/sizeof(data1[0]))-1);
    rec_selection_sort(data2, (sizeof(data2)/sizeof(data2[0]))-1);
    rec_selection_sort(data3, (sizeof(data3)/sizeof(data3[0]))-1);

    int n=0;
    while(n<7)
    {
        printf("%d ",data1[n]);
        n++;
    }
    puts("");
    n=0;
    while(n<7)
    {
        printf("%d ",data2[n]);
        n++;
    }
    puts("");
    n=0;
    while(n<7)
    {
        printf("%d ",data3[n]);
        n++;
    }
    return 0;
}
