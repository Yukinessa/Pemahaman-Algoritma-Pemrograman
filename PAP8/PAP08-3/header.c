#include "header.h"

int max2(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    return num2;
}

int rec_max(int data[], int cur, int arrSize){
    if(cur==arrSize){
        return data[0];
    }else{
        data[0]=max2(data[0],data[cur]);
        //printf("%d ",data[cur]);
        return rec_max(data,cur+1,arrSize);
    }
}
