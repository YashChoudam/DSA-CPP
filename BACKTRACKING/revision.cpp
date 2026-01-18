#include <iostream>
using namespace std;

void print(int sudoku[][9])
{
    cout << "Sudoku " << endl ;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku[i][j] << "  ";
        }
        cout << endl;
    }
}

bool isSafe(int sudoku[][9], int row, int column, int digit)
{
    // horizontal check
    for (int j = 0; j < 9; j++)
    {
        if (sudoku[row][j] == digit)
        {
            return false;
        }
    }

    // vertical check
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[i][column] == digit)
        {
            return false;
        }
    }

    // 3 x 3 grid
    int startRow = (row / 3) * 3;
    int startColumn = (column / 3) * 3;
    for (int i = startRow; i < startRow + 3; i++)
    {
        for (int j = startColumn; j < startColumn + 3; j++)
        {
            if (sudoku[i][j] == digit)
            {
                return false;
            }
        }
    }
    return true ;
}

bool sudokuSolver(int sudoku[][9], int row, int column)
{
    if (row == 9)
    {
        print(sudoku);
        return true;
    }

    int nextRow = row ;
    int nextColumn = column + 1;
    if (column + 1 == 9)
    {
        nextColumn = 0;
        nextRow = row + 1;
    }

    if (sudoku[row][column] != 0)
    {
        return sudokuSolver(sudoku, nextRow, nextColumn);
    }

    for (int digit = 1; digit <= 9; digit++)
    {
        if (isSafe(sudoku, row, column, digit))
        {
            sudoku[row][column] = digit;
            if (sudokuSolver(sudoku, nextRow, nextColumn))
            {
                return true;
            }
            sudoku[row][column] = 0;
        }
    }
    return false;
}

int main()
{
    int sudoku[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9} };
    sudokuSolver(sudoku,0,0);
}