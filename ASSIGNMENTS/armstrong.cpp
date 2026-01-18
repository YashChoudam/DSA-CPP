#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout << "Enter the value of n (the number must be 3 digit) : ";
    cin >> n ;
    int a , b , c ;
    a = n%10 ;
    b = ((n-a)%100)/10;
    c = ((n-a-b)%1000)/100;
    cout << a << endl; 
    cout << b << endl ; 
    cout << c << endl ;
    if (n == (a*a*a)+(b*b*b)+(c*c*c))
    {
        cout << "Enterd number is armstrong number ";
    }
    else
    {
        cout << "NOT AN ARMSTRONG NUMBER ";
    }
    return 0 ;
}