#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "Enter the value of n : ";
    cin >>  n ;
    int sum = 0 ;
    int lastdigit ;
    while (n > 0)
    {
        lastdigit = n%10;
        if (lastdigit %2!=0)
        {
            sum = sum + lastdigit ;
        }
        n = n/10 ;
    }
    
    cout << "Sum of odd digits in the entered number is equal to : " << sum;
    return 0 ;
}