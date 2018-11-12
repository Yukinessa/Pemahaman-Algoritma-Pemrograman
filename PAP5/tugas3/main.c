/*
NAMA = KUN AMRIN AMANU
NIM = A11.2017.10333
*/
#include "pustaka.h"

int main()
{
    int wadah1,wadah2;
    int list1[]={9,12,43,13,15};
    int list2[]={12,4,19,9,22,1};

    min_max(list2,6,&wadah1,&wadah2);
    printf("%d %d ",wadah1,wadah2);
    return 0;
}
