#include "header.h"

float rec_mean2(int data[], int cur, int n){
    if(cur==n){
        //printf("%f\n",(float)data[0]/(float)n);
        return (float)data[0]/(float)n;
    }else{
        //printf("%d %d %.2d %.2d\n",n,cur,data[cur],data[0]);
        if(cur!=0 && cur<n){
            data[0] += data[cur];
        }
        return rec_mean2(data,cur+1,n);
    }
}
