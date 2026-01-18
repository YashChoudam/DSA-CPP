#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
    if (n < 0)
    {
        return -1;
    }
}
int main()
{
    int n ;
    cout << "Enter the value of n : " ;
    cin >> n ;
    cout << "Factorial of " << n << " is equal to : " << factorial(n) << endl ;
    return 0 ;
}