#include "header.h"

int mul_rec(int angka1, int angka2){
    if(angka1==0 || angka2==0){
        return 0;
    }
    /// basis 1
    if(angka1==1)
    {
        return angka2;
    }
    else /// Rekurens
    {
        return mul_rec(angka1-1,angka2)+angka2;
    }
}
