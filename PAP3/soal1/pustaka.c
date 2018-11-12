#include "pustaka.h"

int count_array(int data[], int jml_data)
{
    int a;
    int hitung=0;
    for(a=0;a<jml_data;a++){
        if(data[a]!=NULL){
            hitung++;
        }
    }
    return hitung;
}
