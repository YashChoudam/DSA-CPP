#include<iostream>
using namespace std ;
int main()
{
    int mat[4][4] = { 
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    } ;
    cout << mat << endl ;
    cout << mat + 1 << endl ;
    cout << &mat[0][1] << " != " << mat + 1 << endl ;
    cout << &mat[1][0] << " = " << mat + 1 << endl ;
    return 0 ;

}