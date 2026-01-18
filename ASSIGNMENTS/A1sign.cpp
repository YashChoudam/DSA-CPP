#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n > 0)
    {
        cout << "Entered number is a Positive number ";
    }
    else if (n < 0)
    {
        cout << "Entered number is negative number  ";
    }
    else
    {
        cout << "Entered number is zero  ";
    }
    return 0;
}