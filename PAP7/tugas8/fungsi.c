#include"header.h"

int sum_traversal(int data[],int cur){
    if(data[cur]==NULL){
        return 0;
    }
    else{
        return data[cur]+sum_traversal(data,cur+1);
    }
}
