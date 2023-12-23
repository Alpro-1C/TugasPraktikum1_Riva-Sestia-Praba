#include <iostream>
using namespace std;
int main(){
    int nilai = 0;
    cout << "masukkan nilai : " << endl;
    cin >> nilai;
    if (nilai >= 90){
    cout << "Selamat! Anda memdapatkan nilai A" << endl;}
    else if (nilai >= 80&&nilai <= 89){
    cout << "Anda mendapatkan nilai B" << endl;}
    else if (nilai >= 70&&nilai <=79){
    cout << "Anda mendapatkan nilai C" << endl;}
    else if (nilai >= 60&&nilai <= 69){
    cout << "Anda mendapatkan nilai D" << endl;}
    else (nilai < 60){
    cout << "Anda mendapatkan nilai E" << endl;}
    return 0;
}