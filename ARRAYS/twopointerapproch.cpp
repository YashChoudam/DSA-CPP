#include<iostream>
using namespace std ;
int main()
{
    int n = 5;
    int A[n] = {1,2,3,4,5};
    
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " " ;
    }
    cout << endl ;
    int start , end ;
    start = 0 ;
    end = n - 1 ;
    while (start<end)
    {
        swap(A[start],A[end]);
        start++ ;
        end--;
    }
    cout << "Reversed array is as follows : " << endl ;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " " ;
    }

    
}