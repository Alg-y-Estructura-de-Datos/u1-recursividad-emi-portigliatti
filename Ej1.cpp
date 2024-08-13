/*
Implemente una función para potencias enteras con recursividad. Definición
recursiva para elevar un número a una potencia: Un número elevado a la potencia
cero produce la unidad; la potencia de un número se obtiene multiplicándolo por
sí mismo elevando a la potencia menos uno. Por ejemplo:
3^2=3*(3^1)=3*[3*(3^0)]=3*(3*1)=9
*/

#include <iostream>
using namespace std;

int funcionPotencia(int base, int expo){

    if(expo==0){
        return 1;
    }else{
        return base*funcionPotencia(base,expo-1);
    }
}

int main() {

    int base, expo;

    cout<<"Ingrese la base: "<<endl;
    cin>>base;
    cout<<"Ingrese el exponente: "<<endl;
    cin>>expo;

    cout<<"La potencia de "<<base<<" a la "<<expo<<" es: "<<funcionPotencia(base,expo)<<endl;


    

   
}
