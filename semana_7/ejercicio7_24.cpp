#include <iostream>
#include <array>
using namespace std;

array<array<int, 8>, 8> board;

void outputBoard(array<array<int,8>,8> board){
    for (auto const& row : board){
        for (auto const& tile : row){
            cout<< tile <<" ";
        }
        cout<<endl;
    }
}

bool isPosValid(int row, int column) {
    if (board[row][column] > 0) 
        return false;

    for (int j = 0; j < 8; j++) {

        int diag = row - column;
        int antidiag = row + column;

        if (board[row][j] > 0)
            return false;
        if (board[j][column] > 0) 
            return false;
        if (antidiag - j >= 0 && antidiag-j<8 && board[antidiag - j][j] > 0) 
            return false;
        if (diag + j < 8 && diag+j>=0 && board[diag + j][j]>0) 
            return false;
        
    }
    return true;
}

bool eightQueens(int row) {
    if (row== 8) {
        outputBoard(board);
        return true;
    }
    for (int j = 0; j < 8; j++) {
        if (isPosValid(row, j))
        {
            board[row][j] = row + 1;
            if (eightQueens(row + 1))return true;
            board[row][j] = 0;
        }
    }
    
    return false;
}

int main()
{
    eightQueens(0);
}






