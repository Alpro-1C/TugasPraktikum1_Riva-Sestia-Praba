#include<iostream>
using namespace std;
void garis(){
    for (int i = 1; i <= 35 ; i++){
        cout << "=";
    }
    cout << "\n";
}
void header(){
    garis();
    cout << "| Program Mencari Nilai Max Array |\n";
    garis();
}
int main(){
    int i;
    header();
    int n;
    cout << "Input jumlah Elemen Array : ";
    cin >> n;
    int arr[n];
    cout << "Silakan input : " << n << " nilai untuk diisi kedalam Array\n";
    for (int i =0; i < n; ++i){
    cout << "Nilai ke - " << i + 1 << ":";
    cin >> arr[i];
    }
    int maxArray = arr[0];
    int indeksMax = 0;
    for (int i = 1; i < n; ++i){
        if (arr[i] > maxArray){
            maxArray = arr[i];
            indeksMax = i;
        }
    }
    cout << "Nilai tertinggi adalah : " << maxArray << " dan terdapat dalam indeks " << indeksMax << "array";
    return 0;
}