// The knight problem

#include <array>
#include <iostream>
using namespace std;

void outputBoard(array<array<int,8>,8> board){
    for (auto const& row : board){
        for (auto const& tile : row){
            cout<< tile <<" ";
        }
        cout<<endl;
    }
}

void moveType(int moveType, int& cR, int& cC){
    switch(moveType){
        case 0:
            cC = 2;
            cR = -1;
            break;
        case 1:
            cC = 1;
            cR = -2;
            break;
        case 2:
            cC = -1;
            cR = -2;
            break;
        case 3:
            cC = -2;
            cR = -1;
            break;
        case 4:
            cC = -2;
            cR = 1;
            break;
        case 5:
            cC = -1;
            cR = 2;
            break;
        case 6:
            cC = 1;
            cR = 2;
            break;
        case 7:
            cC = 2;
            cR = 1;
            break;
    }
}


int main(){
    array<array<int, 8>, 8> board{};
    int currentRow{0};
    int currentColumn{0};

    moveType(0, currentRow, currentColumn);
    cout<<currentRow<< " " << currentColumn<<endl;

    outputBoard(board);
    return 0;

}

