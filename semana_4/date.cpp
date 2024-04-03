#include <iostream>
#include "date.h"

using namespace std;

int main(){
    Date datei (3,1,2020);
    Date dateii (15,14,2019);
    Date dateiii (20,12,1500);

    datei.isLeapYear();

    datei.isDayTrue();

/*) Modificar los m´etodos de la clase para validar si el a˜no esta en dentro del rango
1900 hasta 2050, caso contrario, se debe colocar 1900 por defecto.
(b) Agregar la funci´on bool isLeapYear() const a la clase y verificar si en la fecha
representa un a˜no bisiesto.
Ciencia de la Computaci´on IPractica Calificada de Laboratorio III - P´agina 3 de 3 3 de abril de 2024
(c) Modificar los m´etodos de la clase para validar si el dia del mes es correcto. Considere
que un a˜no bisiesto tiene 29 dias en el mes de febrero.
(d) En la funci´on principal crear 3 objetos de tipo Date: (i) 03 / 01 / 2020; (ii) 15 / 14
/ 2019; y (iii) 20 / 12 / 1500.
(e) Invocar a la funci´on displayDate() para mostrar las fechas.*/