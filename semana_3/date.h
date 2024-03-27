#include <string>
#include <iostream>

class Date{
    public:
        explicit Date(int d, int m, int y):
            date{d},year{y}{
                if(m>= 1 && m <=12) {
                    month = m;
                }
                else {
                    month = 1;
                }
            }

        void setDate(int givenDate){
            date = givenDate;
        }

        void setMonth(int givenMonth){
            if(givenMonth>= 1 && givenMonth <=12) {
                month = givenMonth;
            }
            else {
                month = 1;
            }
        }

        void setYear(int givenYear){
            year = givenYear;
        }

        int getDate() const{
            return date;
        }
        

        int getMonth() const{
            return month;
        }
       
        int getYear() const{
            return year;
        }

        void displayDate() const{
            std::cout<<"Fecha: "<<date<<"/"<<month<<"/"<<year<<std::endl;

        }
    private:
        int date{0}, month{0}, year{0};
};