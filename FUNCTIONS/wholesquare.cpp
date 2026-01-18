#include <iostream>
using namespace std;
int square(int x, int y)
{
   int result ;
   result = (x + y)*(x + y);
   return result ;
}
int main()
{
    int a , b ;
    cout << "Enter a : " ;
    cin >> a ;
    cout << "Enter b : " ;
    cin >> b ;
    cout << "whole square is equal to : " << square(a,b);
}