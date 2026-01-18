#include <iostream>
using namespace std;
void Transpose(int arr[][3], int r, int c, int b[][2])
{
   
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            b[j][i] = arr[i][j];
        }
    }
}
int main()
{
    int r = 2;
    int c = 3;

    int numbers[2][3] = {
        {11, 12, 13},
        {21, 22, 23}};
    cout << "Original Matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
    int Transposed[3][2];
    Transpose(numbers, 2, 3, Transposed);

    cout << "\n Transpose Matrix: \n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << Transposed[i][j] << " ";
        }
        cout << endl ;
    }
}

// /*
// Write a program to perform transpose of a matrix rows = 2 , columns = 3
// */

// #include <iostream>
// using namespace std;
// void Transpose(int a[][3], int r, int c , int b[][2])
// {

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             b[j][i] = a[i][j];
//         }
//     }

// }
// int main()
// {
//     int r = 2;
//     int c = 3;

//     int numbers[2][3] = {
//         {11, 12, 13},
//         {21, 22, 23}};
//     cout << "Original Matrix: \n";
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << numbers[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int Transposed[3][2] ;
//     Transpose(numbers, 2, 3, Transposed);

//     cout << "\n Transpose Matrix: \n";
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             cout << Transposed[i][j] << " ";
//         }
//         cout << endl;
//     }
// }