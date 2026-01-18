#include<iostream>
using namespace std ;

int optimizedSumSubarray(int arr[], int n)
{
    int currentSum = 0 ;
    int maxSum = INT32_MIN ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > (currentSum + arr[i]))
        {
            currentSum = arr[i] ;
        }else {
            currentSum += arr[i] ;
        }
        maxSum = max(currentSum,maxSum);
    }
    return maxSum ;
}

int main()
{
    int A[] ={2,-3,6,-5,4,2} ;
    cout << "Maximum sum of the subarray : " << optimizedSumSubarray(A,6) ;
    return 0 ;
}