#include<iostream>
using namespace std ;
int clearithBit(int n , int i )
{
    int mask = ~( 1 << i ) ;
    return (n & mask ) ;
}
int main()
{
    int n = 15 ;
    int i = 2 ;
    cout << clearithBit(n,i) << endl ;
    return 0 ;
}