#include<iostream>
using namespace std ;
void PrintSubArray(int arr[],int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i] ;
            }
            cout << "," ;
        }
        cout << endl ;
    }
    
}
int main()
{
    int A[5] = {4,5,6,7,8} ;
    int n = sizeof(A)/sizeof(A[0]) ;
    cout << "All the subarrays of the following array is as follows : " << endl ;
    PrintSubArray(A,n) ;
    return 0;
}