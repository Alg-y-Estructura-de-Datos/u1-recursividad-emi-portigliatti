/*
Crear un programa que emplee recursividad para calcular el mayor de los
elementos de un vector de “n” tamaño dado por pantalla por el usuario.
*/

#include <iostream>
#include <vector>
using namespace std;

int encontrarMayorRecursiva(const vector<int>& vec, int n){
    //Caso base: si el vector tiene un solo elemento ese elemento es el mayor.
    if(n==1){
        return vec[0];
    }

    int maxAnterior= encontrarMayorRecursiva(vec,n-1);
    if(vec[n-1]>maxAnterior){
        return vec[n-1];
    }else{
        return maxAnterior;
    }
}

int main(){

    int n;

    cout<<"Ingrese el tamano del vector: "<<endl;
    cin>>n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el elemento "<<i+1<<": "<<endl;
        cin>>vec[i];
    }

    cout<<"El mayor elemento del vector es: "<<encontrarMayorRecursiva(vec,n)<<endl;

    



}