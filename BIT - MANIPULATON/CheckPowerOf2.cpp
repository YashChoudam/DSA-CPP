#include<iostream>
using namespace std ;
bool isPoweroftwo(int n)
{
    if ((n & (n-1))==0)
    {
        return true ;
    }
    else
    {
        return false ;
    }
    
}
int main()
{
    int num ;
    cout << "Enter the number to check for the power of 2 : " ;
    cin >> num ;
    cout << isPoweroftwo(num) ;
    return 0 ;  
}