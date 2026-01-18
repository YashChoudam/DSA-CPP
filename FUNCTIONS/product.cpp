#include<iostream>
using namespace std ;
int product(int x , int y)
{
    int result ;
    result = x * y ;
    return result ;
}

int main()
{
    int a , b ;
    cout << "Enter the first number: " ;
    cin >> a ;
    cout << "Enter the seacond number : " ;
    cin >> b ;
    cout << "Product of " << a << "and" << b << "is equal to : " << product(a,b);
    return 0 ;
}