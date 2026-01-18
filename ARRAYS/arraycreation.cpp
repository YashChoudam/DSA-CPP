#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout << "Enter the numbers of elements inside the array : " ;
    cin >> n ;
    int A[n];

    for (int  i = 0; i < n; i++)
    {
        cout << "Enter the array element " << i << " : " ;
        cin >> A[i];
    }
    cout << "The entered array is as follows : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl ;
    }
    
    return 0 ;
}
