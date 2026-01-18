#include <iostream>
using namespace std;
int fibonacciSeries(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
    }
}
int main()
{
    int n = 7 ;
    cout << n << " th fibonacci term is : " << fibonacciSeries(n) << endl ;
    return 0 ;
}