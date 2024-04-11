// Programa que recibe un numero y consecuentemente realiza la secuencia fibonacci de "numero"-largo

#include <iostream>

using namespace std;

int main(){

    int a{0}, b{1}, aux{0}; 
    int num{0}, sum {0};

    cout<<"Ingrese un numero natural: ";
    cin>>num;

    cout<<"Secuencia Fibonacci: ";

    for (int i = 0; i < num; i++)
    {   
        cout<<a<<" ";
        sum += a;

        aux = a+b;
        a = b;
        b = aux;
    }    
    
    cout <<"\nSuma de Secuencia: "<< sum;
    return 0;
}