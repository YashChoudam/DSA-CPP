/*
In this question we have to return or print the sum of the digonals(both primary and secondary digonals) sum
must be added and then returned

*/
#include <iostream>
using namespace std;
void Accept(int matrix[][4], int n)
{
    cout << "Enter the elements of the matrix  \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void Display(int matrix[][4], int n)
{
    cout << "Entered   elements of the matrix  \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}
void DigonalSum(int matrix[][4], int n)  // Time complexity is equal to O(n^2)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                result = result + matrix[i][j];
            }
            else if (j == n - i - 1)
            {
                result = result + matrix[i][j];
            }
        }
    }

    cout << "Sum of digonal elements is equal to : " << result << endl;
}
void DigonalSum1(int matrix[][4],int n) // Time complexity is equal to O(n)
{
    int sum = 0 ;
    for (int i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
        if (i != n-i-1)
        {
            sum = sum + matrix[i][n-i-1] ;
        }
        
    }
    cout << "Sum of the digonal elements is equal to  : " << sum << endl ;
    
}



int main()
{
    int A[4][4];
    Accept(A, 3);
    Display(A, 3);
    DigonalSum(A, 3);
    DigonalSum1(A, 3);

    return 0;
}