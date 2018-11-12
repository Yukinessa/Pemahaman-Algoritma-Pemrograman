#include "pustaka.h"

int hitung_lokal(char text[]){
    int a=0;
    int b=0;
    int c=0;

    char vokal[10]={'a','i','u','e','o','A','I','U','E','O'};
    while(text[a]!='\0'){
        b=0;
        while(b<10){
            if(text[a]==vokal[b])
            {
                c++;
            }
            b++;
        }
        a++;
    }
    return c;
}
