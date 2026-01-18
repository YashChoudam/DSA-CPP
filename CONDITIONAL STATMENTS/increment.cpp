#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n ;
    int result = 0 ;
    for (int i = 0; i <= n ; i++)
    {
        result = result + i ;
    }
    cout<<"Sum of 1st n natural number is equal to : " << result << endl ;
     return 0 ;
}