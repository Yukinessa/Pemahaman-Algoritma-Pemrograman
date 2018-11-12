#include "header.h"

int pow_rec(int angka1,int angka2){

    if(angka2==0){
        return 1;
    }
    else{
        return angka1 * pow_rec(angka1,angka2-1);
    }
}
