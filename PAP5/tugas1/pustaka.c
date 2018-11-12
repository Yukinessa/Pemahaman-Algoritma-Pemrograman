#include "pustaka.h"

int sequent_search(int angka, int data[], int jml_data){
    int a;
    for(a=0;a<jml_data;a++){
        if(angka==data[a]){
            return 1;
        }
    }
    return 0;
}
