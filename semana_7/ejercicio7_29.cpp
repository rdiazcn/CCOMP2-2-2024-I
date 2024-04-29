#include <iostream>
#include <array>
using namespace std;
array<array<bool, 8>, 8> board{};

void outputBoard() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j])  
                cout << 'Q' << " ";
			else 
                cout << '*' << " ";
		}
		cout << endl;
	}
}
bool isPosValid(int row, int column) {
	
	for (int i = 0; i < 8; i++) {
		if (board[i][column]) return false;
	}

	int diag = row - column;
	int antidiag = row + column;

	int j=0;
	for (int i = 0; i < 8; i++) {

		j = i - diag;
		if (j >= 0 && j < 8 && board[i][j]) 
            return false;

		j = antidiag - i;
		if (j >= 0 && j < 8 && board[i][j]) 
            return false;
	}
	return true;
}

bool setQueens(int row) {
	if (row == 8) {
		return true;
	}

	else {
		for (int j = 0; j < 8; j++) {
			if (isPosValid(row, j)) {
				board[row][j] = true;
				if (setQueens(row + 1)) return true;
				board[row][j] = false;
            }
		}
    }
	return false;
}


int main()
{
	setQueens(0);
	outputBoard();
}

