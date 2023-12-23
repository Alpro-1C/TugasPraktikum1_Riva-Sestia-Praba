#include <iostream>
using namespace std;
int main(){
    int firstValue = 10,secondValue = 8,thirdValue = 0;
    thirdValue=firstValue;
    firstValue=secondValue;
    secondValue=thirdValue;
    cout << "nilai firstValue : " << firstValue << endl;
    cout << "nilai secondValue : "<< secondValue << endl;
    return 0;
}