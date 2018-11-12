#include "header.h"

///tugas 1
//FUNGSI NGGO CONVERT BIASA DADI PECAHAN
pecahan makePecahan(int pemb,int peny){
    pecahan pch;
    //PECAHAN TAK UNDANG PCH
    pch.pembilang=pemb;
    //PEMBILANG'E PCH = PEMB
    pch.penyebut=peny;
    //PENYEBUT'E PCH = PENY
    return pch;
    //BALIKKE PCH
}

///tugas 2
void printPecahan(pecahan P){
    printf("\n%d/%d",P.pembilang,P.penyebut);
}

///tugas 3
int pembilang(pecahan p){
    return p.pembilang;
}

///tugas 4
int penyebut(pecahan p){
    return p.penyebut;
}

///tugas 5
pecahan addPecahan(pecahan p1,pecahan p2){
    pecahan pch;
    //PENYEBUT'E PCH = PENYEBUT'E P2 + PENYEBUT'E P1
    pch.penyebut=p2.penyebut*p1.penyebut;
    pch.pembilang=p1.pembilang*p2.penyebut+p1.penyebut*p2.pembilang;
    printf("\n%d/%d",pch.pembilang,pch.penyebut);
    return pch;
}

///tugas 6
pecahan subPecahan(pecahan p1, pecahan p2){
    pecahan pch;
    pch.penyebut=p2.penyebut*p1.penyebut;
    pch.pembilang=p1.pembilang*p2.penyebut-p1.penyebut*p2.pembilang;
    printf("\n%d/%d",pch.pembilang,pch.penyebut);
    return pch;
}

///tugas 7
pecahan mu1Pecahan(pecahan p1, pecahan p2){
    pecahan pch;
    pch.pembilang=p1.pembilang*p2.pembilang;
    pch.penyebut=p1.penyebut*p2.penyebut;
    printf("\n%d/%d",pch.pembilang,pch.penyebut);
    return pch;
}

///tugas 8
pecahan divPecahan(pecahan p1, pecahan p2){
    pecahan pch;
    pch.pembilang=p1.pembilang*p2.penyebut;
    pch.penyebut=p1.penyebut*p2.pembilang;
    printf("\n%d/%d",pch.pembilang,pch.penyebut);
    return pch;
}
///tugas 9
float desimalPecahan(pecahan p){
    float a;
    a=(float)p.pembilang/(float)p.penyebut;
    return a;
}

///tugas 10
int isEqual(pecahan p1,pecahan p2){
    float a,b;
    a=(float)p1.pembilang/(float)p1.penyebut;
    b=(float)p2.pembilang/(float)p2.penyebut;
    if(a==b){
        return 1;
    }
    else{
        return 0;
    }
}

///tugas 11
int isBigger(pecahan p1, pecahan p2){
    float a,b;
    a=(float)p1.pembilang/(float)p1.penyebut;
    b=(float)p2.pembilang/(float)p2.penyebut;
    if(a>b){
        return 1;
    }
    else{
        return 0;
    }
}
///tugas 12
int isSmaller(pecahan p1,pecahan p2){
    float a,b;
    a=(float)p1.pembilang/(float)p1.penyebut;
    b=(float)p2.pembilang/(float)p2.penyebut;
    if(a<b){
        return 1;
    }
    else{
        return 0;
    }
}
