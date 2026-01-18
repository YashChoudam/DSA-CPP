#include<iostream>
using namespace std ;
void DecimalTobinary(int Decimal)
{
    int n = Decimal ;
    int Binary = 0 ;
    int power = 1 ;
    while (n>0)
    {
        int lastdigit = n%2 ;
        Binary += lastdigit*power ;
        power = power*10 ;
        n = n/2 ;
    }
    cout << "Decimal to binary of " << n << Binary ;
}
int main()
{
    int a ;
    cout << "Enter a number  : " ;
    cin >> a ;
    DecimalTobinary(a) ;
    return 0 ;
}