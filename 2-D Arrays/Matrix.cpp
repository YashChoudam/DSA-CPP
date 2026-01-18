#include<iostream>
using namespace std ;
void Accept(int arr[][3] , int m , int n)
{
    cout << "Enter the values of the matrix : " << endl ;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter " << i << " " << j << " value : " ;
            cin >> arr[i][j] ;
        }
        
    }
    cout << endl ; 
}

void Display(int arr[][3] , int m , int n)
{
    cout << "Matrix : " << endl ;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << arr[i][j] << "  " ;
        }
        cout << endl ;
    }
    
}
int main()
{
    int r = 3 , c = 3 ;
    int matrix[3][3] ;
    Accept(matrix,r,c) ;
    Display(matrix,r,c) ;
    return 0 ; 

}



















// #include<iostream>
// using namespace std ;
// void Display(int A[3][3],int r,int c)
// {
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << A[i][j] << "  ";
//         }
//         cout << endl ;
//     }
    
// }
// int main() 
// {
//     const int r = 3 ;
//     const int c = 3 ;
//     int arr[r][c] ; // Manual input of data in the matrix not user defined
//     cout << "Enter the elements of the matrix " << endl ;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j] ;
//         }
//     }
//     cout << "Entered matrix is as follows : " << endl ;
//     Display(arr,r,c);
//     cout << endl ;
//     int student_marks[3][3] = {{20,19,18},{14,19,2},{2,5,10}}; // hardcoded values 
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << student_marks[i][j] << " " ;
//         }
//         cout << endl ;
//     }
    
//     return 0 ; 
    
// }