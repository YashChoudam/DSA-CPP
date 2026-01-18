#include <iostream>
#include <vector>
using namespace std;
int binomial(int n, int r)
{
    int result = 1;
    for (int i = 0; i < r; i++)
    {
        result = result * (n - i);
        result = result / (i + 1);
    }
    return result;
}
int elemetPascalsTriangle(int row, int column)
{
    int Solution = binomial(row - 1, column - 1);
    return Solution;
}
void printRow(int n)
{
    int answer = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            answer = 1;
        }
        else
        {
            answer = answer * (n - i);
            answer = answer / i;
        }
        cout << answer << " ";
    }
    cout << endl;
}
void printPascalsTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printRow(i);
    }
    cout << endl ;
    
}
int main()
{
    // // int n ;
    // int row, column;
    // // cout << "Enter the number of rows in pascals triangle : " ;
    // // cin >> n ;
    // cout << "Enter the row number and column no of the element : ";
    // cin >> row;
    // cin >> column;
    // cout << "Value of " << row << " , " << column << " element is equalt to : " << elemetPascalsTriangle(row, column) << endl;
    int n;
    cout << "Enter the number of rows of the triangle  : ";
    cin >> n;
    printPascalsTriangle(n);

    return 0;
}