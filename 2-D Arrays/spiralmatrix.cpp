#include <iostream>
using namespace std;
void Display(int A[][4], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
}
void SpiralMatrix(int A[][4], int r, int c)
{
    int srow, scolumn, erow, ecolumn;
    srow = scolumn = 0;
    erow = r - 1;
    ecolumn = c - 1;

    while (srow <= erow && scolumn <= ecolumn)
    {
        // top
        for (int j = scolumn; j < ecolumn; j++)
        {
            cout << A[srow][j] << "  ";
        }

        // right
        for (int i = srow; i <= erow; i++)
        {
            cout << A[i][ecolumn] << "  ";
        }

        // bottom
        for (int j = ecolumn - 1; j >= scolumn ; j--)
        {
            if (srow==erow)        // this condition to avoid printing of middle part of the matrix
            {
                break ;
            }
            
            cout << A[erow][j] << "  ";
        }

        // Left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scolumn==ecolumn) // this condition to avoid printing of middle part of the matrix
            {
                break ;
            }
            cout << A[i][scolumn] << "  ";
        }

        srow++;
        scolumn++;
        erow--;
        ecolumn--;
    }
    cout << endl ;
}
int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    Display(matrix, 4, 4);
    cout << endl;

    cout << "Spiral matrix " << endl;
    SpiralMatrix(matrix, 4, 4);
    return 0;
}