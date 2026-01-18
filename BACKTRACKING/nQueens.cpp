#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printBoard(vector<vector<char>> board)
{
    cout << endl;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "______________________" << endl;
}
bool isSafe(vector<vector<char>> board, int row, int column)
{
    int n = board.size();
    // HORIZONTAL
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }
    for (int i = 0; i < row; i++)
    {
        if (board[i][column] == 'Q')
        {
            return false;
        }
    }
    // Digonal Left
    for (int i = row, j = column; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    // Digonal right
    for (int i = row, j = column; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}
int nQueens(vector<vector<char>> board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printBoard(board);
        return 1 ;
    }

    int count = 0 ;
    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q';
            count += nQueens(board, row + 1);
            board[row][j] = '.';
        }
    }
    return count ; // no of possible solutions 
}

int main()
{
    vector<vector<char>> board;
    int n ;
    cout << "Enter the number of Queens : " ;
    cin >> n ;
    cout << endl ;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    cout << nQueens(board, 0);
    return 0;
}