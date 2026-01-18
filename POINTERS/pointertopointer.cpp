#include<iostream>
using namespace std ;
int main()
{
    int a = 10 ;
    int *ptr = &a;
    int **ptr1 = &ptr ;
    cout << ptr1 <<"\n";
    cout << ptr  <<"\n";
    cout << a  ;
    return 0 ;
    
}