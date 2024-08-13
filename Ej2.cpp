/*
Implementar una función recursiva que determine la suma de los “n” primeros
números naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el
resultado de la suma.
*/

#include <iostream>
using namespace std;

int sumaRecursiva(int n){
    if(n==1){
        cout<<n;
        return 1;
    }else{
        cout<<n<<"+";
        return n + sumaRecursiva(n-1);
    }
}

int main() {

    int n;

    cout<<"Ingrese un numero n para determinar la suma de los n primeros numeros naturales: "<<endl;
    cin>>n;

    cout<<"La suma de los primeros "<<n<<" numeros naturales es: "<<sumaRecursiva(n)<<endl;
}
