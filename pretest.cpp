/*
Nama    : Shalvina Zahwa Aulia
NPM     : 140810180052
Kelas   : B
Tanggal : 6 Maret 2019
*/

#include <iostream>

using namespace std;

void moveZeroToFront (int arr[], int n);
void input (int (&arr)[100], int& n);
void output (int arr[], int n);

int main(){
    int arr[100];
    int n;
    input(arr,n);
    moveZeroToFront(arr,n);
    output(arr,n);
}
void moveZeroToFront(int arr[], int n){
    int jumlah =0;
    for (int i=1; i<n; i++){
        if (arr[i]=0){
            arr[i]=arr[jumlah];
            jumlah++;
        }
    }
}
void input (int (&arr)[100],int& n){
    cout<< "Masukan batas : "; cin >> n;
    for (int i=1; i<=n;i++){
        cout << "Masukan input ke-"<<i<< " : ";
        cin >> arr [i];
    }
}
void output(int arr[], int n){
    for (int i=0; i<=n;i++){
        cout << arr[i] <<" , ";
    }
}
