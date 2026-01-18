#include <iostream>
using namespace std;
int main()
{
    int n = 5 ;
    int A[n] = {1, 2, 3, 4, 5};
    cout << "Entered array is as follows " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    int count = 0;
    int B[n];
    for (int i = n-1; i >= 0; i--)
    {
        B[count] = A[i];
        count++;
    }
    cout << endl ;

    cout << "Reversed array is as follows " << endl;
    for (int i = 0; i < n; i++)
    {
        A[i] = B[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}