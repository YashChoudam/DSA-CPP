#include<iostream>
using namespace std;
void printDecreasing(int n)
{
    if (n==0)
    {
        return ;
    }
    cout << n << endl ;
    return printDecreasing(n-1) ;
}
int main()
{
    printDecreasing(100);
}