#include<iostream>
using namespace std ;
int pow(int x , int n)
{
    if (n==0)
    {
        return 1 ;
    }
    int halfPower = pow(x,n/2);
    int halfPowerSquare = halfPower * halfPower ;
    if (n%2!=0)
    {
        return x * halfPowerSquare ;
    }
    return halfPowerSquare ;
}
int main()
{
    int x = 2 ;
    int n = 20 ;
    cout << pow(x,n) << endl ;
}