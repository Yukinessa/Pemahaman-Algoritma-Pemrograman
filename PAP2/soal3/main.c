/*
NAMA : KUN AMRIN AMANU
NIM : A11.2017.10333
*/

#include "pustaka.h"

int main()
{
    int bilangan;
    printf("Masukan bilangan untuk dicek = ");
    scanf("%d",&bilangan);
    if(check_prime(bilangan)==true){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}
