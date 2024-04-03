#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main(){
    int edad{0};
    string nombre{""};

    Student estudiante1("", 0);
    Student estudiante2("", 0);

    cout<<"Ingrese el nombre del 1° estudiante: ";
    getline(cin,nombre);
    cout<<"Ingrese la edad del 1° estudiante: ";
    cin>>edad;

    estudiante1.setAge(edad);
    estudiante1.setName(nombre);

    cout<<"Ingrese el nombre del 2° estudiante: ";
    cin.ignore();
    getline(cin,nombre);
    cout<<"Ingrese la edad del 2° estudiante: ";
    cin>>edad;

    estudiante2.setAge(edad);
    estudiante2.setName(nombre);

    cout<<"\nEstudiante 1: "<<estudiante1.getName()<<"; Edad: "<<estudiante1.getAge()<<endl;
    cout<<"Estudiante 2: "<<estudiante2.getName()<<"; Edad: "<<estudiante2.getAge()<<endl;

    if(estudiante1.isOlder())
        cout<<"El estudiante 1: "<<estudiante1.getName()<<" es mayor de edad."<<endl;
    else
        cout<<"El estudiante 1: "<<estudiante1.getName()<<" es menor de edad."<<endl;

    if(estudiante2.isOlder())
        cout<<"\nEl estudiante 2: "<<estudiante2.getName()<<" es mayor."<<endl;
    else
        cout<<"El estudiante 2: "<<estudiante2.getName()<<" es menor."<<endl;
}

// a) Complete el constructor de la clase
// b) Implemente getName, setName, getAge, setAge
// c) Implemente el metodo bool isOlder() const, el cual verifica si el estudiante es mayor de edad
// d) Implemente la funcion principal, en la que creara dos objetivos de tipo Student.
// Solicitara los daros, nombre y edad y posteriormente imprimira los datos e indicara si son estudiantes mayores de edad.
