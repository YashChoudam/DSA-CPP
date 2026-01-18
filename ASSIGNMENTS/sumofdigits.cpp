#include <iostream>
using namespace std;
int main()
{
    int n; // n must be a 5 digit number
    cout << "Enter any 5 digit number : ";
    cin >> n;

    int Lastdigit;
    int sum = 0;
    while (n > 0)
    {
        Lastdigit = n % 10;
        sum += Lastdigit;
        n = n / 10;
    }
    cout << "Sum of digits is equal to : " << sum;
    // int a , b , c , d ,e ;
    // a = n%10 ;
    // b = ((n-a)%100)/10 ;
    // c = ((n-a-b)%1000)/100 ;
    // d = ((n-a-b-c)%10000)/1000;
    // e = ((n-a-b-c-d)%100000)/10000 ;
    // cout << "Sum of digits is equal to : " << a + b + c + d + e ;
    return 0;
}