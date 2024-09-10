#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero <= 0){
        cout << "Ingresa un numero mayor a 0."
    }else {
        for(int i = 1; i <= 10; i++){
        cout << "La tabla de multiplicar del " << numero << " es " << "= " << numero * i << endl;
    }






    return 0;
}
