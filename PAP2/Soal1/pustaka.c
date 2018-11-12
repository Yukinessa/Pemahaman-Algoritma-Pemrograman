#include "pustaka.h"

int is_kabisat(int input){
    int hasil;


    if(input%4==0)
    {
        hasil=0;
    }
    else if(input%100==0)
    {
        hasil=1;
    }
    else if(input%400==0)
    {
        hasil=0;
    }
    else{}
    return hasil;
}
