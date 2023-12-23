#include<iostream>
using namespace std;
int main(){
  cout << "##  Program C++ Deret Fibonacci  ##" << endl;
  cout << "===================================" << endl;
  cout << endl;
  int n,t1 = 0,t2 = 1,angkaBerikutnya = 0;

    cout << "Masukkan jumlah deret fibonacci : ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        angkaBerikutnya = t1 + t2;
        t1 = t2;
        t2 = angkaBerikutnya;

        cout << angkaBerikutnya << " ";
    }
  cout << endl;
  return 0;
}