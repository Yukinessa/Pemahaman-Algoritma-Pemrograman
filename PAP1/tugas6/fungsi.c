/*
Nama = Kun Amrin Amanu
NIM = A11.2017.10333
TUGAS6
*/
int max(int arr_num[], int n){
    int a=0;
    int maxi=0;

    a=0;
    while(a<n)
    {
        if(maxi<arr_num[a]){
        maxi=arr_num[a];
        }
        a++;
    }
    return maxi;
}
