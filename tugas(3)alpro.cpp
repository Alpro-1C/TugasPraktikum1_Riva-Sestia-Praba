#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout << "Masukkan angka pertama:" << endl;
    cin >> a;
    cout << "Masukkan angka kedua:" << endl;
    cin >> b;
    cout << "Masukkan angka ketiga:" << endl;
    cin >> c;
    if (a >= b && a >= c){
    d = a;}
    else if (b >= a && b >= c) {
    d = b;}
    else if (c >= a && c >= b) {
    d = c;}
    cout << "Angka terbesar adalah : " << d << endl;
    return 0;
}