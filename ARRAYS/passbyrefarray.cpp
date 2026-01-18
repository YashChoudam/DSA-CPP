#include<iostream>
using namespace std ;
int main()
{
    int a = 10 ;
    int *ptr = &a ;
    int arr[] = {1,2,3,4,5} ;
    cout << ptr << endl ;
    cout << arr << endl ;

    cout << *arr << endl ;
    cout << *(arr+1) << endl ;
    return 0 ;

}