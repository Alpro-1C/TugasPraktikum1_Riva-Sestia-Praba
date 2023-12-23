#include <iostream>
using namespace std;
int main(){
    int menu;
    float p,l,t,a,s,luas;
cout << "Pilih menu : " << endl;
cout << "[1] Hitung Luas Persegi Panjang" << endl;
cout << "[2] Hitung Luas Persegi" << endl;
cout << "[3] Hitung Luas Segitiga" << endl;
cout << endl;
cout << "Masukkan pilihan : " << endl;
cin >> menu;
cout << endl;
switch(menu){
case 1:
    cout << "Masukkan nilai panjang : ";
    cin >> p;
    cout << "Masukkan nilai lebar : ";
    cin >> l;
    luas = p*l;
    cout << "Luas Persegi Panjang tersebut adalah : " << luas;
    break;

case 2:
    cout << "Masukkan nilai sisi : ";
    cin >> s;
    luas = s*s;
    cout << "Luas persegi tersebut adalah : " << luas;
    break;

case 3:
    cout << "Masukkan nilai alas : ";
    cin >> a;
    cout << "Masukkan nilai tinggi : ";
    cin >> t;
    Luas = 0.5*(a*t);
    cout << "Luas segitiga tersebut adalah : " << luas;
    break;
default:
   cout<< "Menu yang anda masukkan tidak tersedia" << endl;
    break;
}
    return 0;
}