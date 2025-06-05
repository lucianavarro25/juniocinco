#include <iostream>
using namespace std;
int main (){
    int contpar=0,   contimpar=0   ,cantidad;
    int numeros[cantidad];
    cout << "Cuantos numeros deseas ingresar ";
    cin >> cantidad;
    for (int i = 0; i<cantidad; i++){
        cout << "Numero : " << i + 1<< " ";
        cin >> numeros[i];
    }
for (int i = 0; i < cantidad; i++){
    if (numeros[i] % 2 == 0){
        cout << "numero" << i + 1 << ": " << numeros[i] << "ES PAR" << endl;
        contpar++;
        cout << "contador de pares: " << contpar;
   }
   else if (numeros[i] % 2 != 0){
    cout << "numero " << i + 1 << numeros [i] << "ES IMPAR"<< endl;
    contimpar++;
    cout << "contador de impares: " << contimpar;
   }

}
return 0;
}