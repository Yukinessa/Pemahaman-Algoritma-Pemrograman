#include "header.h"

int div_rec(int angka1, int angka2){
    int hasil=0;

    if(angka1==0 || angka2==0){
        return 1;
        }
    if(angka2==0){
        return 0;
        }
    else if(angka1-angka2 == 0){
    printf("%d ",angka2);
    return 1;
    }
    else if(angka1<angka2){
    return 0;
    }
    else{
    if(angka2==1){
      printf("%d ",angka2);
    }else{
      printf("%d - ",angka2);
    }
    return 1 + div_rec(angka1-angka2,angka2);
  }
}
