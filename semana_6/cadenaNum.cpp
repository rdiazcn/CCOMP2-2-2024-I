/* Numeros en una cadena */

#include <iostream>
#include <string>
using namespace std;

int numstring(string cadena){
    int c{0};
    char j;

    for (int i=0; i<cadena.length(); i++){
        j = cadena[i];
        int val = static_cast<int>(j);
        if (val>=48 && val<=57)
            c+=1;
    }
    return c;
}

int main(){
    string cadena;
    
    cout<<"Ingrese la cadena: ";
    getline(cin, cadena);

    cout<<numstring(cadena);

}