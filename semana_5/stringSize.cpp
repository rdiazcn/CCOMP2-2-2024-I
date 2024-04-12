// Numero de numeros en una cadena
// ASCII 48 - 57

#include <iostream>

using namespace std;

int main(){
    string cadena;
    int c{0};

    cout<<"Ingrese la cadena: ";
    getline(cin, cadena);

    char j;

    for (int i=0; i<cadena.length(); i++){
        j = cadena[i];
        int val = static_cast<int>(j);
        if (val>=48 && val<=57)
            c+=1;
    }

    cout<<"Cantidad de numeros: "<<c;
    return 0;
}