
#include <string>
#include <iostream>

using namespace std;
class Date {
    public:
        explicit Date(int d, int m, int y):
        day{d}, month{m}, year{y} {

            if(y>= 1900 && y <=2050) 
                year = y;
            else
                year = 1900;

            if(m >= 1 && m <= 12) 
                month = m;
            else
                month = 1;

            switch(month) {
                case 2:
                    if (d>=1){
                        if (isLeapYear() && d==29)
                            day = d;
                        else if (!isLeapYear() && d <=28)
                            day = d;
                    }
                    break;

                case 4: case 6: case 9: case 11:
                    if (d > 30)
                        day=1;
                    break;

                default:
                    if (d > 31)
                        day=1;
                    break;
            }   
        }

        bool isLeapYear() const{
            if (year%4==0 && year%100!=0){
                return true;
            }
            else if (year%100==0 && year%400==0){
                return true;
            }

            else {
                return false;
            }
                
        }

        int getDay() const{
            return day;
        }
        int getMonth() const{
            return month;
        }
        int getYear() const{
            return year;
        }

        void setDay(int d){
            switch(month) {
                case 2:
                    if (d>=1){
                        if (isLeapYear() && d==29)
                            day = d;
                        else if (!isLeapYear() && d <=28)
                            day = d;
                    }
                    break;

                case 4: case 6: case 9: case 11:
                    if (d > 30)
                        day=1;
                    break;

                default:
                    if (d > 31)
                        day=1;
                    break;

            }
        }

        void setMonth(int m){
            if(m >= 1 && m <= 12) {
                month = m;
            }
        }

        void setYear(int y){
            if(y>= 1900 && y <=2050) 
                year = y;
        }

        void displayDate(){
            cout<<"Fecha: "<<day<<"/"<<month<<"/"<<year<<endl;
        }
    private:
        int day{1};
        int month{1};
        int year{1900};


};
/*Todos los años bisiestos son divisibles entre 4. Aquellos años que son divisibles entre 4, pero no entre 100, 
son bisiestos. Los años que son divisibles entre 100, pero no entre 400, no son bisiestos. 
Sin embargo, los años divisibles entre 100 y entre 400 sí que son bisiestos.*/

