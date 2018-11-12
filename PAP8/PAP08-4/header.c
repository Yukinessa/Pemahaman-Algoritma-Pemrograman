#include "header.h"

int min2(int num1,int num2){
    if(num1<num2){
        return num1;
    }else{
        return num2;
    }
}

int rec_min(int data[], int cur, int arrSize){
    if(cur==arrSize){
        return data[0];
    }else{
        data[0]=min2(data[0],data[cur]);
        //printf("%d ",data[cur]);
        return rec_min(data,cur+1,arrSize);
    }
}
