// Programa que recibe un numero y determina si es primo o no

#include <iostream>
#include <cmath>

using namespace std;

bool isPrimo(int n){

    int j = sqrt(n);

    for(int i=2; i<=j; i++){
        if (n%i==0 && n!=i){
            return false;
        }
    }

    return true;
}

int main(){
    
    // Manualmente
    int num{0};
    cout<<"Ingrese un numero natural: ";
    cin>>num;
    if (isPrimo(num))
        cout<<"El numero "<<num<<" es primo."<<endl;
    
    else
        cout<<"El numero "<<num<<" es compuesto."<<endl;

    //Valores del 1 al 100
    /*for (int i=2; i<=100; i++){
        if (isPrimo(i))
            cout<<"El numero "<<i<<" es primo."<<endl;
        
        else
            cout<<"El numero "<<i<<" es compuesto."<<endl;

    }*/
    
    // Muestra los primos del 1 al 100 en una fila.
    /* for (int i=2; i<=100; i++){
          if (isPrimo(i))
         cout<<i<<" ";
    } */

    return 0;
}