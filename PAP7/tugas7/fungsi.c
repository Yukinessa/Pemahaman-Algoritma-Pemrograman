#include "header.h"

void fibonacci(int angka1){
  int a=0;
  for(a=1;a<=angka1;a++){
    if(a==angka1){
      printf("%d\n",fiboseed(a));
    }
    else{
      printf("%d, ",fiboseed(a));
    }
  }
}


int fiboseed(int angka){
  if(angka<=1){
    return angka;
  }
  return fiboseed(angka-1) + fiboseed(angka-2);
}
