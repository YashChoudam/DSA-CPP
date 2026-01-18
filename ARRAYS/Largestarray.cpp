#include <iostream>
using namespace std;
void Largest(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i]>max)
        {
            max = A[i] ;
        }
        
    }
    cout << "Largest element of the array is : " << max << endl ;
}
int main()
{
    int A[] = { 10, 324, 45, 90, 980} ;
    int n = sizeof(A)/sizeof(A[0]) ;
    Largest(A,n);
    return 0 ;
}