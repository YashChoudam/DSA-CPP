#include <iostream>
using namespace std;
void primornot(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cout << x << " Is not a prime number " << endl;
            break;
        }
        else
        {
            cout << x << " Is a prime number " << endl;
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n == 1)
    {
        cout << "1 is neither prime nor composite ";
    }
    else
    {
        primornot(n);
    }

    return 0;
}