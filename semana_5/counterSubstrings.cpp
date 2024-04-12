// Recibe 2 cadenas, la primera mas larga que la segunda
// Cuente cuantas veces la segunda cadena se repite dentro de la segunda

// Ejm aba saba caba naba; aba; 4

#include <iostream>

using namespace std;

int main(){

    string cadena1;
    string cadena2;

    int i{0}, j{0};
    int match{0},cont{0};

    cout <<"Ingrese la primera cadena: ";
    getline(cin, cadena1);
    
    cout <<"Ingrese la segunda cadena: ";
    getline(cin, cadena2);

    if (cadena1.length()<cadena2.length())
        cout<<"La cadena 2 tiene que ser menor."<<endl;

    else {
        while (i<cadena1.length()){
            if (cadena1[i]==cadena2[j]){
                    match += 1;
                    j++;
            }
            if (j>=cadena2.length()){
                j = 0;
                if (match == cadena2.length()){
                    cont+=1;
                    match=0;
                }
                else
                    match=0;

            }
            i++;
        }
    }
    cout<<"Numero de repeticiones: "<<cont;

}