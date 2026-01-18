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
int binomial(int n , int r)
{
    int z = factorial(n) ;
    int y = factorial(r)*factorial(n-r) ;
    int BinomialCoeff = z/y ;
    return BinomialCoeff;
}
int main()
{
    int a,b ;
    cout << "Enter a : " ;
    cin >> a ;
    cout << "Enter b : " ;
    cin >> b ;
    cout << "Binomial Coefficient is : " << binomial(a,b) ;
    return 0 ;
}