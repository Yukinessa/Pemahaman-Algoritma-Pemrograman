#include "pustaka.h"

int is_inverse(int list1[], int list2[], int jml_data){
    int a=0,b=jml_data-1;
    while(a<jml_data){
        if(list1[a]!=list2[b]){
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}
