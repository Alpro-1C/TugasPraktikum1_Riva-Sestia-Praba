#include <iostream>
using namespace std;
int main (){
    int firstValue = 10,secondValue = 8;
    secondValue = firstValue + secondValue;
    firstValue = secondValue - firstValue;
    secondValue = secondValue - firstValue;
    cout << "nilai firstValue : " << firstValue << endl;
    cout << "nilai secondValue : " << secondValue << endl;
    return 0;
}