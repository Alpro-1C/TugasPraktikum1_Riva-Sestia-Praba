#include <iostream>
using namespace std;
void garis(){
    for (int i = 1; i <= 30; i++){
        cout << "_" ;}
    cout << "\n";
}

void judul(string judul){
    cout << judul << "\n";
    garis();}
int fibonacci (int n){
    if (n == 0 || n == 1) {
            return n;
    }
    else {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main(){
    int n;
    judul("## Program Deret Fibonacci ##");
    do {
    cout << "Banyak deret yang diinginkan : ";
    cin >> n;
     if (n <= 0) {
            cout << "Masukkan jumlah deret yang valid (harus lebih dari 0).\n\n";
        }
    }
    while (n <= 0);
    cout << n << " Deret Bilangan Fibonacci : \n";
    for (int i = 0; i < n; i++){
       cout << fibonacci(i);
       cout << " ";
    }
    return 0;
}