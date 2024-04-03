#include <string>
#include <iostream>

class Student {
    public:
        explicit Student(std::string n, int a):
        age{a}, name{n} {/*Condiciones */}
        int getAge() const{
            return age;  
        }
        std::string getName() const{
            return name;
        }
        void setAge(int a){
            age = a;
        }
        void setName(std::string n){
            name = n;
        }

        bool isOlder() const{
            if (age>=18)
                return true;
            else
                return false;
        }
    private:
        std::string name;
        int age;


};