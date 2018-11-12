/*
NAMA = KUN AMRIN AMANU
NIM = A11.2017.10333
TUGAS2
*/
#include <stdio.h>
#include <stdlib.h>
int printf_jumlah(int num1, int num2);

int printf_jumlah(int num1, int num2)
{
    int num3;
    num3=num1+num2;

    return num3;
}

int main()
{
    int num1=15;
    int num2=12;
    printf("%d + %d = %d",num1,num2,printf_jumlah(num1,num2));
    return 0;
}
