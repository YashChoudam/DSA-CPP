#include<iostream>
using namespace std; 
int Setithbit(int n , int i)
{
    int mask = 1 << i ;
    return (n | mask );
}

int main()
{
    int n , i ;
    cout << "Enter n and the ith bit to set " ;
    cin >> n ;
    cin >> i ;
    cout << endl ;
    cout << Setithbit(n,i) << endl ;
    return 0 ;
}