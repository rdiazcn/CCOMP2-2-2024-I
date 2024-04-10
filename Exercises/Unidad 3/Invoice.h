/*
6.  Create a class called Invoice that a hardware store might 
    use to represent an invoice for an item sold at the store. An 
    Invoice should include four data members—a part number (type string),
    a part description (type string), a quantity of the item being purchased 
    (type int) and a price per item (type int). Your class should have a 
    constructor that initializes the four data members. Provide a set and a get
    function for each data member. In addition, provide a member function named 
    getInvoiceAmount that calculates the invoice amount (i.e., multiplies the 
    quantity by the price per item), then returns the amount as an int value. 
    If the quantity is not positive, it should be set to 0. If the price per item is not
    positive, it should be set to 0. Write a test program that demonstrates class 
    Invoice’s capabilities


*/
#include <string>

class Invoice{
    public:
        explicit Invoice(std::string num, std::string desc, int q, int p):
        number{num}, description{desc}, price{p} {
            if (quantity >= 0)
                quantity = q;
            if (price >= 0)
                price = p;
        }

        void setNumber(std::string num){
            number = num;
        }

        std::string getNumber() const{
            return number;
        }


        void setDescription(std::string desc){
            description = desc;
        }

        std::string getDescription() const{
            return description;
        }
        void setQuantity(int q){
            if (q >= 0)
                quantity = q;
            else
                quantity = 0; 
        }

        int getQuantity() const{
            return quantity;
        }
        void setPrice(int p){
            if (p >= 0)
                price = p;
            else
                price = 0; 
        }

        int getPrice() const{
            return price;
        }
        
        int getInvoiceAmount() const{
            int invoice;
            invoice = quantity*price;
            return invoice; 
        }
        
    private:
        std::string number;
        std::string description;
        int quantity{0};
        int price{0};
};