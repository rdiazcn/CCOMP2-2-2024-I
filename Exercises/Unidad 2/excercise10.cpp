/*
10. (Arithmetic) Write a program that asks the user to enter
    two numbers, obtains the two numbers from the user and prints
    the sum, product, difference, and quotient of the two numbers

*/

#include <iostream>

using namespace std;

int main(){

    int x{0};
    int y{0};

    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    cout<<"\nSum is: "<<x+y<<endl;
    cout<<"Product is: "<<x*y<<endl;
    cout<<"Difference is: "<<x-y<<endl;
    cout<<"Quotient is: "<<x/y<<endl;

    return 0;

}

