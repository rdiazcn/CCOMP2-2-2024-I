
#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    int d, m, y;
    Date date1{10,2,2004};
    
    date1.displayDate();

    cout<<"Dia: "<<date1.getDate();
    cout<<" Mes: "<<date1.getMonth();
    cout<<" Año: "<<date1.getYear();

    cout<<"\nIngrese el dia: ";
    cin>>d;
    cout<<"Ingrese el mes: ";
    cin>>m;
    cout<<"Ingrese el año: ";
    cin>>y;

    date1.setDate(d);
    date1.setMonth(m);
    date1.setYear(y);
    
    date1.displayDate();


}