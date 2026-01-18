#include<iostream>
using namespace std ;
int counter(int n)
{
    int count = 0 ;
    while (n>0)
    {
        count++ ;
        n = n/10 ;
    }
   return count ; 
}
int main()
{
    int n ;
    cout << "Enter n : " ;
    cin >> n ;
    cout << "Number of digits in n is equal to : " << counter(n);
    return 0 ;
}