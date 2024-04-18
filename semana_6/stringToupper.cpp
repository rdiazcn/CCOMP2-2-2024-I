#include <iostream>
#include <string>
using namespace std;

string toUpper(string cad){
    
    char c;

    for(int i=0; i<cad.size(); i++){
        c = cad.at(i);
        int val = static_cast<int>(c);
        if (val>= 97 && val<=122){
            cad.at(i) = c - 32;
        }
    }

    return cad;
}

int main(){
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout<<cadena<<endl;

    cadena = toUpper(cadena);

    cout<<cadena;
}
