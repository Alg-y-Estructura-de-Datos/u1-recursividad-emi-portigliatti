/*
Crear un programa que pida al usuario un número entero positivo "n". Luego
implementar una función recursiva que cuente la cantidad de dígitos pares que
ocupan posiciones impares (identificándolas de izquierda a derecha) en "n". Ej.: si
el número es 22005 el resultado es 2, y si fuera 1414 el resultado es 0
*/

#include <iostream>
using namespace std;

int contarParesEnPosicionesImpares(int n, int pos=1){
    //Caso base: si n es 0, no hay mas digitos que revisar.
    if(n==0){
        return 0;
    }

    int digitoActual=n%10; //El resto de la division.
    if(pos%2!=0 && digitoActual%2==0){
        return 1+contarParesEnPosicionesImpares(n/10,pos+1); //Ponemos 1 para no arrancar desde la posicion 0 del vector.
    }else{
        return contarParesEnPosicionesImpares(n/10, pos+1);

    }
}

int main(){
    int n;
    cout<<"Ingrese un numero entero positivo n: "<<endl;
    cin>>n;

    cout<<contarParesEnPosicionesImpares(n)<<endl;
}