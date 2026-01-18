#include<iostream>
using namespace std ;
int sumOfdigits(int n)
{
    int result = 0 ;
    while (n>0)
    {
        result = result + n%10 ;
        n = n/10;
    }
   return result ; 
}
int main()
{
    int x ;
    cout << "Enter x : " ;
    cin >> x ;
    cout << "Number of digits in x : "<<sumOfdigits(x);
    return 0 ;
}