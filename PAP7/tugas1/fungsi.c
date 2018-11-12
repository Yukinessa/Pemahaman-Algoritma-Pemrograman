#include "header.h"


int tambah(int angka1, int angka2){
    if(angka1==0) /// Basis 0
    {
        return angka2;
    }
    else /// Rekurens
    {
        return tambah(angka1-1,angka2)+1;
    }

}
