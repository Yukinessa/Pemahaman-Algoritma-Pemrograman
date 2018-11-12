/*
NAMA = KUN AMRIN AMANU
NIM = A11.2017.10333
TUGAS3
*/
#include <stdio.h>
#include <stdlib.h>

float hitung(float num1,float num2, char input){
    float out;

    if(input == '+')
    {
        out=num1+num2;
    }
    else if (input =='-')
    {
        out=num1-num2;
    }
    else if(input == '*')
    {
        out=num1*num2;
    }
    else if(input == '/')
    {
        out=num1/num2;
    }
    return out;
}

int main()
{
    printf("%d %c %d = %.2f\n",2,'+',3,hitung(2,3,'+'));
    printf("%d %c %d = %.2f\n",9,'-',2,hitung(9,2,'-'));
    printf("%d %c %d = %.2f\n",4,'*',3,hitung(4,3,'*'));
    printf("%d %c %d = %.2f\n",9,'/',3,hitung(9,3,'/'));
    return 0;
}
