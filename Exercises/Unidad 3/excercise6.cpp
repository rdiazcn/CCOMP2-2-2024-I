#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
    
    Invoice John("EB-1043", "1x Small Hammer", 1, 7);

    cout<<"Invoice Number: "<<John.getNumber()<<endl;
    cout<<"Description: "<< John.getDescription()<<endl;
    cout<<"Quantity: "<< John.getQuantity()<<endl;
    cout<<"Price: "<< John.getPrice()<<endl;
    cout<<"Invoice Amount: "<<John.getInvoiceAmount()<<endl; // Should be 7, 7*1=7

    John.setDescription("0x Books");
    John.setNumber("EB-6023");
    John.setQuantity(-10); // Should set to 0

    cout<<"\nInvoice Number: "<<John.getNumber()<<endl;
    cout<<"Description: "<< John.getDescription()<<endl;
    cout<<"Quantity: "<< John.getQuantity()<<endl;
    cout<<"Price: "<< John.getPrice()<<endl; // Should be 7 still
    cout<<"Invoice Amount: "<<John.getInvoiceAmount()<<endl; // Should be 0, 0*7 = 0

    return 0;
}