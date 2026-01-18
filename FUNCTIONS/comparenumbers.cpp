#include <iostream>
using namespace std;
void compare(int x, int y, int z)
{
    if (x > y && x > z)
    {
        cout << x <<" is the largest ";
    }
    else if (y > x && y > z)
    {
        cout << y << " is the largest ";
    }
    else if (x==y && y==z)
    {
        cout << x << "," << y << "," << z << " are equal  " ;
    }
    else
    {
        cout << z <<" is the largest ";
    }
}
int main()
{
    int a , b , c ;
    cout << "a = " ;
    cin >> a ;
    cout << "b = " ;
    cin >> b ;
    cout << "c = " ;
    cin >> c ;
    compare(a,b,c);
    return 0 ;
}