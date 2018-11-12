#include "header.h"

void rec_print_all(int data[], int cur, int arrSize){
    if(cur==arrSize){

    }else{
        if(cur+1==arrSize){
            printf("%d",data[cur]);
        }else{
            printf("%d - ",data[cur]);
        }
        rec_print_all(data,cur+1,arrSize);
    }
}
