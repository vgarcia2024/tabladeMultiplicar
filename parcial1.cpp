#include <iostream>

using namespace std;

void esFizzBuzz(){
    int numeroFizz;
    cout << "Ingrese un numero: ";
    cin >> numeroFizz;


    for(int i = 1; i <= numeroFizz; i++){
        if(i %3 == 0 && i %5 == 0){
            cout << "FizzBuzz" << endl;
        }else if(i %3 == 0){
            cout << "Fizz" << endl;
        }else if(i %5 == 0){
            cout << "Buzz" << endl;
        }else {
            cout << i << endl;
        }
    }
}


void esBisiesto(){
    int numeroBisiesto;
    cout << "Ingresar un numero bisiesto: ";
    cin >> numeroBisiesto;

    if(numeroBisiesto %4 == 0 && numeroBisiesto %100 != 0 || (numeroBisiesto %400 == 0)){
        cout << numeroBisiesto << " ES un anio bisiesto." << endl;
    }else {
        cout << numeroBisiesto << " NO es anio bisiesto." << endl;
    }
}

void tablaInversa(){
    int numeroMult;
    cout << "Ingresa un numero: ";
    cin >> numeroMult;

    for(int i = 10; i >= 1; i--){
        cout << numeroMult << " x " << i << " = " << numeroMult * i << endl;
    }
}

int main(){

    int opcionMenu;

    do{

        cout << "\tBienvenido!" << endl;
        cout << "\t1. FizzBuzz. " << endl;
        cout << "\t2. Bisiesto." << endl;
        cout << "\t3. Tabla inversa." << endl;
        cout << "\t4. Salir." << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionMenu;

        switch(opcionMenu){
            case 1:
                esFizzBuzz();
                break;
            case 2:

                esBisiesto();
                break;
            case 3:
                tablaInversa();
                break;
            default:
                cout << "Chau!";
        }
    }while(opcionMenu != 4);


    return 0;
}
