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
        case 1:
            cC = 1;
            cR = -2;
        case 2:
            cC = -1;
            cR = -2;
        case 3:
            cC = -2;
            cR = -1;
        case 4:
            cC = -2;
            cR = 1;
        case 5:
            cC = -1;
            cR = 2;
        case 6:
            cC = 1;
            cR = 2;
        case 7:
            cC = 2;
            cR = 1;
    }
}


int main(){
    array<array<int, 8>, 8> board{};
    int currentRow{0};
    int currentColumn{0};

    moveType(0, currentRow, currentColumn);
    
    cout<<currentRow<<" "<<currentColumn<<endl;
    /*for (int i=0; i<64; ++i){
        
    }*/
    outputBoard(board);
    return 0;

}

