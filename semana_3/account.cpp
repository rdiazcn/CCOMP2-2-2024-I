
#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    Account account1{"John Blue",50};
    
    int deposit{0};
    int withdrawAmount{0};

    cout<<"account1: " <<account1.getName()<<" balance is $"<<account1.getBalance();
    
    cout<<"\nEnter deposit ammount: ";
    cin>>deposit;
    account1.deposit(deposit);

    cout<<"\nInitial account name is: "<<account1.getName();
    cout<<"\nInitial Balance is $"<<account1.getBalance()<<"\n";
    
    cout<<"Enter withdraw amount: ";
    cin>>withdrawAmount;
    account1.withdraw(withdrawAmount);

    cout<<"\nAccount name is: "<<account1.getName();
    cout<<"\nBalance is $"<<account1.getBalance()<<"\n";
}