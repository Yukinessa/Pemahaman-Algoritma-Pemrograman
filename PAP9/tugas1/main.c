#include "header.h"
/*
    NAMA = Kun Amrin Amanu
    NIM = A11.2017.10333
*/
int main()
{
    ///tugas 1
    printf("%d/%d",makePecahan(5,4).pembilang,makePecahan(5,4).penyebut);
    ///tugas 2
    printPecahan(makePecahan(4,9));
    ///tugas 3
    printf("\n%d",pembilang(makePecahan(4,9)));
    ///tugas 4
    printf("\n%d",penyebut(makePecahan(4,9)));
    ///tugas 5
    addPecahan(makePecahan(4,9),makePecahan(1,2));
    ///tugas 6
    subPecahan(makePecahan(4,9),makePecahan(1,5));
    ///tugas 7
    mu1Pecahan(makePecahan(4,9),makePecahan(1,2));
    ///tugas 8
    divPecahan(makePecahan(4,9),makePecahan(1,2));
    ///tugas 9
    printf("\n%.2f",desimalPecahan(makePecahan(4,9)));
    ///tugas 10
    printf("\n%d",isEqual(makePecahan(4,9),makePecahan(8,18)));
    ///tugas 11
    printf("\n%d",isBigger(makePecahan(14,2),makePecahan(7,2)));
    ///tugas 12
    printf("\n%d",isSmaller(makePecahan(4,9),makePecahan(7,2)));
    return 0;
}
