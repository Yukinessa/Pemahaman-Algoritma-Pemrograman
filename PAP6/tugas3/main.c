#include <stdio.h>
#include <stdlib.h>

int is_anagram(char text1[],char text2[]){
    char arr_smol[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char arr_big[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int wadah1[26]={0};
    int wadah2[26]={0};

    int a,b;
//// Menghitung Frequensi Karakter text ke 1
    a=0;
    while(a<26){
        b=0;
        while(text1[b]!='\0'){
            if(arr_smol[a]==text1[b]){
                wadah1[a]+=1;
            }
            else if(arr_big[a]==text1[b]){
                wadah1[a]+=1;
            }
            b++;
        }
        a++;
    }
//// Menghitung Frequensi karakter text ke 2
    a=0;
    while(a<26){
        b=0;
        while(text2[b]!='\0'){
            if(arr_smol[a]==text2[b]){
                wadah2[a]+=1;
            }
            else if(arr_big[a]==text2[b]){
                wadah2[a]+=1;
            }
            b++;
        }
        a++;
    }
////Membandingkan antara text 1 dan text 2
    a=0;
    while(a<26){
        if(wadah1[a]!=wadah2[a]){
            return 0;
        }
        a++;
    }
    return 1;
}

int main()
{

    printf("%d\n",is_anagram("astronomer","moon starer"));
    return 0;
}
