#include <iostream>

using namespace std;

void fibo(int n){
    int a{0},b{1},s{0};
    int aux{0};

    for (int i = 0; i < n; i++)
        {   
            cout<<a<<" ";
            s += a;

            aux = a+b;
            a = b;
            b = aux;
        }
    
    cout <<"\nSuma de Secuencia: "<< s<<endl;
}

int main(){

    int num{0};

    cout<<"Ingrese un numero natural: ";
    cin>>num;

    cout<<"Secuencia Fibonacci: ";
    fibo(num);


    return 0;
}