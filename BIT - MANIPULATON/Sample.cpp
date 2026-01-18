#include<iostream>
using namespace std ;
void Sumofdigits(int n)
{
    int count = 0 ;
    while (n>0)
    {
        int lastdigit = n%10 ;
        count = count + lastdigit ;
        n = n/10 ;
    }
    cout << "Sum of digits is equal to : " << count ;
}
int main()
{
    Sumofdigits(12345) ;
    return 0 ;
}