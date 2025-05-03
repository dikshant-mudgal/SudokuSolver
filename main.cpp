#include <iostream>
using namespace std;

const int SIZE = 9;

void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (i % 3 == 0 && i != 0)
            cout << "---------------------\n";
        for (int j = 0; j < SIZE; j++) {
            if (j % 3 == 0 && j != 0)
                cout << "| ";
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isValid(int board[SIZE][SIZE], int row, int col, int num) {
    for (int i = 0; i < SIZE; i++) {
        if (board[row][i] == num || board[i][col] == num)
            return false;
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == num)
                return false;
        }
    }

    return true;
}

bool solveSudoku(int board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isValid(board, row, col, num)) {
                        board[row][col] = num;

                        if (solveSudoku(board))
                            return true;

                        board[row][col] = 0; // backtrack
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void getInput(int board[SIZE][SIZE]) {
    cout << "Enter the Sudoku puzzle (use 0 for empty cells):\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < SIZE; j++) {
            cin >> board[i][j];
            if (board[i][j] < 0 || board[i][j] > 9) {
                cout << "Invalid number! Enter a value between 0 and 9.\n";
                j--; // re-enter this cell
            }
        }
    }
}

int main() {
    int board[SIZE][SIZE];

    getInput(board);

    cout << "\nInitial Sudoku Board:\n";
    printBoard(board);

    if (solveSudoku(board)) {
        cout << "\nSolved Sudoku Board:\n";
        printBoard(board);
    } else {
        cout << "\nNo solution exists.\n";
    }

    return 0;
}