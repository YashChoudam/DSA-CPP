#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "Enter the value of n : ";
    cin >> n ;
    int result = n ;
    for (int  i = 0; i < n; i++)
    {
        cout << result-i << endl;
    }
    return 0 ;
}