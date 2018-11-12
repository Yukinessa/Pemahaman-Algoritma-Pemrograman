#include "pustaka.h"

int get_median(int data[], int jml_data){
    int a,b,swap;
    for(a=0;a<jml_data;a++){
        for(b=a;b<jml_data-1;b++){
            if(data[a]<data[b]){
                swap=data[a];
                data[a]=data[b];
                data[b]=swap;
            }
        }
    }
    float median;
                if (jml_data%2==0)
                {
                    median=(data[(jml_data-1)/2]+data[((jml_data-1)/2)+1])/2;
                    printf("Nilai Tengah adalah  = %.2f",median);

                }
                else
                {
                    median=data[(jml_data-1)/2];
                    printf("Nilai Tengah adalah = %.2f",median);

                }
}
