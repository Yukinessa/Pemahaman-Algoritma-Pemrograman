#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int pembilang;
    int penyebut;
    int p;
} pecahan;


///tugas 1
pecahan makePecahan(int pemb,int peny);
///tugas 2
void printPecahan(pecahan P);
///tugas 3
int pembilang(pecahan p);
///tugas 4
int penyebut(pecahan p);
///tugas 5
pecahan addPecahan(pecahan p1,pecahan p2);
///tugas 6
pecahan subPecahan(pecahan p1, pecahan p2);
///tugas 7
pecahan mu1Pecahan(pecahan p1, pecahan p2);
///tugas 8
pecahan divPecahan(pecahan p1, pecahan p2);
///tugas 9
float desimalPecahan(pecahan p);
///tugas 10
int isEqual(pecahan p1,pecahan p2);
///tugas 11
int isBigger(pecahan p1, pecahan p2);
///tugas 12
int isSmaller(pecahan p1,pecahan p2);


#endif // HEADER_H_INCLUDED
