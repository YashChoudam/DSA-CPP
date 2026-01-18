#include <iostream>
using namespace std;
int ithBit(int n, int i)
{
    int mask = 1 << i;
    if ((n & mask) == 0)
    {
        cout << i << " th bit is 0 " << endl;
        return 0;
    }
    else if ((n & mask) > 0)
    {
        cout << i << " th bit is 1 " << endl;
        return 1;
    }
}
int main()
{
    int n ;
    int i ;
    cout << "Enter the number " ;
    cin >> n ;
    cout << "Enter the ith bit : " ;
    cin >> i ;
    int iBit = ithBit(n,i) ;
    return 0 ;
}