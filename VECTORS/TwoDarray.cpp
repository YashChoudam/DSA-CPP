// DYNAMICALY ALLOCATED MATRIX 
#include<iostream>
using namespace std ;
int main()
{
    int rows , columns ;
    cout << "Enter the number of rows : " ;
    cin >> rows ;
    cout << "Enter the numbers of columns : " ;
    cin >> columns ;

    int **matrix = new int*[rows] ;  //allocating memory for pointers which will point to each row
    for (int i = 0; i < rows; i++)
    {
       matrix[i] = new int[columns] ; // creation of rows 
    }

    int x = 1 ;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = x ;
            x++ ;
            cout << matrix[i][j] << " " ;
        }
        cout << endl ;
    }
    delete [] matrix ;
  return 0 ;   
}