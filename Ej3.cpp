/*
Implementar una función recursiva que dado un número entero lo muestre de
forma invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de
números negativos y mostrar primero el número a invertir y después el número
invertido.
*/

#include <iostream>
using namespace std;

int invertidoRecursiva(int n){


    if(n<10){        //Condición base.
        return n;
    }else{
        cout<<n%10;
        return invertidoRecursiva(n/10); //Terminacion, llamada recursiva.
    }
}

int main() {

    int n;

    cout<<"Ingrese un numero entero para invertir: "<<endl;
    cin>>n;

    if(n<0){
        cout<<"Error, el numero ingresado es negativo"<<endl;
    }else{
    cout<<"El numero original es: "<<n<<endl;
    cout<<"El numero invertido es: "<<invertidoRecursiva(n)<<endl;
    }

}
