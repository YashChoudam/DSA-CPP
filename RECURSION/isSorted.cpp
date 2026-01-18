#include <iostream>
using namespace std;
bool isSorted(int arr[], int n, int index)
{
    if (index == n - 1)
    {
        return true;
    }
    else
    {
        if (arr[index] >= arr[index + 1])
        {
            return isSorted(arr, n, index + 1);
        }
    }
    return false ;
}
int main()
{
    int A[5] ={1,2,3,4,5};
    int B[5] ={5,4,3,2,1};
    int C[5] ={4,1,5,3,2};
    cout << "A is sorted in descending order : " << isSorted(A,5,0) << endl ; 
    cout << "B is sorted in descending order : " << isSorted(B,5,0) << endl ;
    cout << "C is sorted in descending order : " << isSorted(C,5,0) << endl ;
    return 0 ;
}