#include <stdio.h>
#include <stdlib.h>

int search_word(char word[], char text[]){
    int a=0;
    int truth=0;

    int jml1=0;
    while(word[jml1]!='\0'){
        jml1++;
    }

    int jml2=0;
    while(text[jml2]!='\0'){
        jml2++;
    }

    //printf("%d %d\n",jml1,jml2);

    int min=0;
    int max=jml2;
    while(min<max){
        a=0;
        truth=0;
        while(a<jml1){
            if(word[a]==text[a]){
                //printf("%c %c\n",word[a],text[a]);
                truth++;
            }
            a++;
        }
        min++;
    }

    //printf("%d %d %d\n",min,max,truth);

    if(truth==jml1){
        return 1;
    }
    else{
        return 0;
    }
}



int main()
{
    printf("%d",search_word("dian","dian nuswantara"));
    return 0;
}
