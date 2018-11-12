#include "header.h"

int faktorial(int number){
    if(number==0){
        return 1;
    }else{
        return number * faktorial(number-1);
    }
}
