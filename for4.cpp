#include <iostream>
using namespace std;
int main (){
    int n, mul = 0;
    cout << "ingresa un numero";
    cin >> n;
    for (int i=1; i<=10; i++){
        mul = n * i;
        cout << n << " * " << i << " = " << mul << endl;
    }
    return 0;

}