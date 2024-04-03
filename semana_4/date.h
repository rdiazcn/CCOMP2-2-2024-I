
#include <string>
#include <iostream>

using namespace std;
class Date {
    public:
        explicit Date(int d, int m, int y):
        day{d}, month{m}, year{y} {
            if(y>= 1900 && y <=2050) {
                    month = m;
                }
            else {
                    month = 1900;
                }
        }
        bool isLeapYear() const{
            if (!year%4 && year%100){
                cout<<"Divisble entre 4 y no entre 100";
                return true;
            }
            else if (!year%100 && !year%400){
                cout<<"Divisible entre 100 y 400";
                return true;
            }

            else {
                return false;
            }
                
        }   
        int getDay() const{
            return day;
        }

        void isDayTrue(){
            switch(month){
                case 4 || 6 || 9|| 11:
                    if (day > 31){
                        cout<<"El mes "<<month<<" no tiene mas de 31 dias"<<endl;
                        day=1;
                    }
                    break;
                case 2:
                    if (!isLeapYear() and day>29)
                        cout<<"Febrero no tiene mas de 28 dias en años no bisiestos"<<endl;
                        day = 1;
        }

        void displayDate(){
            cout<<"Fecha: "<<day<<"/"<<month<<"/"<<year;
        }
    }
    private:
        int day;
        int month;
        int year;



};
/*Todos los años bisiestos son divisibles entre 4. Aquellos años que son divisibles entre 4, pero no entre 100, 
son bisiestos. Los años que son divisibles entre 100, pero no entre 400, no son bisiestos. 
Sin embargo, los años divisibles entre 100 y entre 400 sí que son bisiestos.*/