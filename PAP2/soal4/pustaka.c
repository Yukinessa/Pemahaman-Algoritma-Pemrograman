#include "pustaka.h"

void char_frequency(char array[]){
    char arr_smol[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char arr_big[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int wadah[26]={0};

    int a,b;
    a=0;
    while(a<26){
        b=0;
        while(array[b]!='\0'){
            if(arr_smol[a]==array[b]){
                wadah[a]+=1;
            }
            else if(arr_big[a]==array[b]){
                wadah[a]+=1;
            }
            b++;
        }
        a++;
    }
    a=0;
    while(a<26){
        if(wadah[a]!=0){
            printf("%c = %d, ",'a'+a,wadah[a]);
        }
        a++;
    }
}
