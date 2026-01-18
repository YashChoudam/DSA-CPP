#include <iostream>
using namespace std;
void decimalTobinary(int decimal)
{
    int n = decimal;
    int binary = 0;
    int power = 1;
    while (n > 0)
    {
        int lastDigit = n % 2;
        binary = binary + lastDigit * power;
        power = power * 10;
        n = n / 2;
    }
    cout << "Decimal to binary of " << decimal << " is eqaul to : " << binary << endl;
}
void binaryToDecimal(long int binary)
{
    long int n = binary ;
    int decimal = 0 ;
    int power = 1 ;
    while (n > 0)
    {
        int lastdigit = n%10 ;
        decimal += lastdigit*power ;
        power = power * 2 ;
        n = n / 10 ;
    }
    cout << "DECIMAL OF " << binary << " IS : " << decimal << endl ; 
}
int main()
{
    int a ;
    cout << "Enter a number  : " ;
    cin >> a ;
    decimalTobinary(a) ;
    int b ;
    cout << "ENTER A BINARY NUMBER : " ;
    cin >> b ;
    binaryToDecimal(b);
    return 0 ;
}