#include <iostream>
using namespace std;
int reverse(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    return reverse;
}

void palindrome(int num)
{
    int reverseNum = reverse(num);
    if (num == reverse(num))
    {
        cout << "Entered number is palindrome " << endl;
    }
    else
    {
        cout << "Entered number is not palindrome " << endl;
    }
}

int main()
{
    int n ;
    cout << "Enter the value of n : " ;
    cin >> n ;
    palindrome(n);
    cout << "Reversed number is as follows : " << reverse(n) ;
    return 0 ;
}