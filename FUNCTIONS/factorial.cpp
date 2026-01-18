#include <iostream>
using namespace std;
int factorial(int x)
{
    int result = 1;
    if (x > 0)
    {
        for (int i = 1; i <= x; i++)
        {
            result = result * i;
        }
        return result;
    }
    else if (x == 0)
    {
        return 1;
    }
}
int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    if (n < 0)
    {
        cout << "factorial of -ve numbers is not defined ";
    }
    else
    {
        cout << "Factorial is :  " << factorial(n);
    }

    return 0;
}