#include<iostream>
using namespace std ;
int main()
{
    int a , b , c ;
    cout << "Enter the value of a : " ;
    cin >> a ;
    cout << "Enter the value of b : " ;
    cin >> b ;
    cout << "Enter the value of c : " ;
    cin >> c ;
     if ( a>b && a>c )
     {
         cout << "a is the greatest ";
     }
     else if( b>a && b>c )
     {
        cout << "b is the greatest ";
     }
     else if (c>a && c>b)
     {
        cout << "c is the greatest ";
     }
     else
     {
        cout << " All the elements a,b,c are equal ";
     }
     
     
return 0 ;
}