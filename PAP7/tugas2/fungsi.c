#include "header.h"

int subs_rec(int angka1, int angka2){
    if(angka2==0) /// Basis 0
    {
        return angka1;
    }
    else /// Rekurens
    {
        return subs_rec(angka1,angka2-1)-1;
    }

}
