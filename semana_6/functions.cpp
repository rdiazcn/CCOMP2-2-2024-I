#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int n) {
    int j = sqrt(n);

    for(int i=2; i<=j; i++){
        if (n%i==0 && n!=i){
            return false;
        }
    }

    return true;
}

void printPrimo(int n){
    for (int i = 0; i<= n; i++){
        if (esPrimo(i))
            cout<<i<<" es primo.\n"
    }
    
}

int main(){

}