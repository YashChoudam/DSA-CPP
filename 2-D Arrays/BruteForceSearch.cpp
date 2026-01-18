#include <iostream>
using namespace std;
void Search(int A[][10], int r, int c, int key)
{
    int flag = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (A[i][j] == key)
            {
                cout << key << " is present at " << i << "," << j << " th position of the matrix \n ";
                flag++;
            }
        }
    }
    if (flag == 0)
    {
        cout << key << " is not present in the given matrix \n ";
    }
}
void Accept(int arr[][10], int r, int c)
{
    cout << "ENTER THE ELEMENTS OF THE MATRIX : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl << endl ;
}
void Display(int arr[][10], int r, int c)
{
    cout << "MATRIX : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int r , c ;
    r = c = 4 ; 
    int Matrix[10][10] ;
    Accept(Matrix, r, c);
    Display(Matrix, r, c);
    int key ;
    cout << "ENTER THE KEY TO SEARCH AN ELEMENT IN THE MATRIX : " ;
    cin >> key ;
    Search(Matrix,r,c, key ) ;
    return 0 ;

}