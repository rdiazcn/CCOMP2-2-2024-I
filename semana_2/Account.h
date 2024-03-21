#include <string>
using namespace std;

class Account {
public:
    void setName(string accountName){
        name = accountName;
    }

    string getName() const{
        return name;
    }
private:
    string name;
};