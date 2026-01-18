#include <iostream>
using namespace std;
int sum(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result + i;
    }
    cout << "Sum of " << n << " numbers is equal to : " << result ;
    return result;
}
int sum(int a, int b)
{
    cout << "Sum : " << (a + b) << endl;
    return a + b;
}
double sum(double a, double b)
{
    cout << "Sum : " << (a + b) << endl;
    return a + b;
}
int main()
{
    sum(12, 23);
    sum(12.5, 23.7);
    sum(100);
    return 0;
}