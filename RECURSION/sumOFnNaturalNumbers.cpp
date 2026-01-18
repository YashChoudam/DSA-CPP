#include<iostream>
using namespace std ;
int sum(int n)
{
    if (n==0)
    {
        return 0 ;
    }
    return n + sum(n-1);
}
int main()
{
    int n = 100 ;
    cout << "Sumof n natural numbers : " << sum(n) << endl ;
    return 0 ;
}