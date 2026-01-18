#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result + i;
    }
    cout << "Addition of first n natural numbers is equal to : " << result;
    return 0;
}