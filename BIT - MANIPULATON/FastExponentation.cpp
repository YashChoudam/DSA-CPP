#include<iostream>
using namespace std ;
void FastExpo(int x , int n)
{
    int ans = 1 ;
    while (n>0)
    {
        int lastbit = n & 1 ;
        if (lastbit)
        {
            ans = ans * x ;
        }
        x = x * x ;
        n = n >> 1 ;
    }
    cout << "Exponent : " << ans  << endl ;
}

int main()
{
    FastExpo(3,5) ;
    return 0 ;
}