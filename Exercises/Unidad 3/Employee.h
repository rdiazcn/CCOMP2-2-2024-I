/*
7.  Create a class called Employee that includes three pieces of 
    information as data members—a firstname (type string), a last 
    name (type string) and a monthly salary (type int). Your class
    should have a constructor that initializes the three data members. 
    Provide a set and a get function for each data member. If the 
    monthly salary is not positive, set it to 0. Write a test program 
    that demonstrates class Employee’s capabilities. Create two 
    Employee objects and display each object’s yearly salary. Then 
    give each Employee a 10 percent raise and display each 
    Employee’s yearly salary again.
*/
#include <string>

class Employee{
    public:
        explicit Employee(std::string first, std::string last, int s):
        FirstName{first},LastName{last},Salary{s}{

        }
        void setFirst(){

        }
        std::string getFirst() const{
            return FirstName;
        }
        void setlast(){

        }
        std::string getLast() const{
            return LastName;
        }
        
        void setSalary(){
            
        }
        int getSalary() const{
            return Salary;
        }

    private:
        std::string FirstName;
        std::string LastName;
        int Salary{0};
};