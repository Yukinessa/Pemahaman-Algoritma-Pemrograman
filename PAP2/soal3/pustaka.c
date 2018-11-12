#include "pustaka.h"

int check_prime(int bil){
    int a;
    int output=1;
    for(a=2;a<bil;a++){
        if(bil%a==0){
            output=0;
            break;
        }
    }
    return output;
}
