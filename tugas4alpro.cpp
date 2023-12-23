#include <iostream>
#include <string>
using namespace std;
int main() {
    int batas;
    int sumganjil = 0;
    int sumgenap = 0;
    int sumprima =0;
    string genap,ganjil;
    cout << "Masukkan batas : ";
    cin >> batas;
    for (int i = 1; i <= batas; i++){
        if (i % 2 == 0) {
            genap += " " + to_string(i);
            sumgenap += i;
        }else{
            ganjil += " " + to_string(i);
            sumganjil += i;
        }
    }
    cout << "Bilangan Genap : " << genap;
    cout << "\nJumlah Bilangan Genap : " << sumgenap;
    cout << "\nFaktor dari " << sumgenap <<" adalah : ";
    for(int i = 1; i <= sumgenap; ++i) {
        if(sumgenap % i == 0)
            cout << i << " ";
    }
    cout << "\nBilangan Ganjil:" << ganjil;
    cout << "\nJumlah Bilangan Ganjil: " << sumganjil;
    cout << "\nFaktor dari " << sumganjil << " adalah : ";
    for(int i = 1; i <= sumganjil; ++i) {
        if(sumganjil % i == 0)
            cout << i << " ";
    }
    cout << "\nBilangan Prima : ";
    for (int i = 2; i <= batas; i++) {
        bool isPrima = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrima = false;
                break;
            }
        }
        if (isPrima) {
            cout << i << " ";
            sumprima += i;
        }
    }
    cout << "\nJumlah Bilangan Prima : " << sumprima;
    cout << "\nFaktor dari " << sumprima << " adalah : ";
    for(int i = 1; i <= sumprima; ++i) {
        if(sumprima % i == 0)
            cout << i << " ";
    }
    return 0;
}