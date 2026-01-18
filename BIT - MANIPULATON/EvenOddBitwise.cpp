#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "Enter the number to check for even of odd : " ;
    cin >> n ;
    if (!(n&1))
    {
        cout << n << " is even number " << endl ;
    } else 
    {
        cout << n << " is odd number " << endl ;
    }
    return 0 ;
}