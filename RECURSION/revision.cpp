#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
        return 1;

    int halfPower = pow(x, n / 2);
    int halfPowerSquare = halfPower * halfPower;
    if (n % 2 == 0)
    {
        return halfPowerSquare;
    }
    else
    {
        return x * halfPowerSquare;
    }
}
int main(){
    cout << pow(25,5) << endl ;
    return 0 ;
}