// Implemente un programa que pida por teclado una cadena
// Considerando espacios (lineget) y convierta la cadena a mayusculas

/*  getline()
    cin.ignore();
    getline();      */

#include <iostream>

using namespace std;

int main(){
    string cad;
    cout << "Ingrese una cadena por favor : ";
    getline(cin, cad);

    char c;

    for(int i=0; i<cad.size(); i++){
        c = cad.at(i);
        int val = static_cast<int>(c);
        if (val>= 97 && val<=122){
            cad.at(i) = c - 32;
        }
    }


    cout<<cad;
}
