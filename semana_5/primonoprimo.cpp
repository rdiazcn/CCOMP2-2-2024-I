// Programa que recibe un numero y determina si es primo o no

#include <iostream>

using namespace std;

bool isPrimo(int n){

    for(int i=2; i<=n; i++){
        if (n%i==0 && n!=i){
            return false;
        }
    }

    return true;
}

int main(){
    
    // Manualmente
    //int num{0};
    //cout<<"Ingrese un numero natural: ";
    //cin>>num;

    //Valores del 1 al 100
    for (int i=2; i<=100; i++){
        if (isPrimo(i))
            cout<<"El numero "<<i<<" es primo."<<endl;
        
        else
            cout<<"El numero "<<i<<" es compuesto."<<endl;

    }
    
    // Muestra los primos del 1 al 100 en una fila.
    // for (int i=2; i<=100; i++){
    //      if (isPrimo(i))
    //         cout<<i<<" ";
    // } 

    return 0;
}