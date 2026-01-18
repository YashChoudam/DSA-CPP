#include<iostream>
using namespace std ;
void PrintArr(int *ptr , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << (*ptr + i) << " " ;
    }
    cout << endl ;
}
int main()
{
    int A[5] = {1,2,3,4,5} ;
    int n = sizeof(A)/sizeof(A[0]) ;
    int *ptr = A ;
    PrintArr(ptr , n) ;
    return 0 ;
}