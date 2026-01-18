#include<iostream>
using namespace std ;
int MaxSubarraySum(int arr[],int n)
{
    int currentSum = 0 ;
        int maxSum = INT32_MIN ;
        for(int i = 0 ; i < n; i++)
        {
            if(arr[i] > (currentSum + arr[i]))
            {
                currentSum = arr[i];
            }else{
                currentSum = currentSum + arr[i] ;
            }
            maxSum = max(currentSum , maxSum) ;
        }
        return maxSum ;
}
int main()
{
    int A[] ={2,-3,6,-5,4,2} ;
    MaxSubarraySum(A,6) ;
    return 0 ;
}


// #include<iostream>
// using namespace std ;
// void MaxSubarraySum(int arr[],int n)
// {
//     int maxSum = INT32_MIN ;
//     for (int start = 0; start < n; start++)
//     {
//        int currentSum = 0 ;
//        for (int end = start ; end < n; end++)
//        {
//           currentSum = currentSum + arr[end] ;
//           maxSum = max(currentSum,maxSum) ;
//           cout << currentSum << " " ;
//        }
//        cout << endl ;        
//     }
//     cout << "Max Sum of the subarray is equal to " << maxSum ;
// }
// int main()
// {
//     int A[7] = {1,2,5,-8,3,-1,10};
//     MaxSubarraySum(A,7) ;
//     return 0 ;
// }






















// // #include <iostream>
// // using namespace std;
// // void MaxSum(int arr[], int n)
// // {
// //     int maxSum = INT32_MIN;
// //     for (int start = 0; start < n; start++)
// //     {
// //         int CurrentSum = 0;
// //         for (int end = start; end < n; end++) // Time complexiety = O(n^2)
// //         {
// //             CurrentSum = CurrentSum + arr[end];
// //             maxSum = max(CurrentSum, maxSum);
// //             cout << CurrentSum << ",";
// //         }

// //         cout << endl;
// //     }

// //     cout << "Maximum sum of the subarray is equal to : " << maxSum << endl;
// // }
// // int main()
// // {
// //     int A[7] = {1, 2, 5, -8, 3, -1, 10};
// //     MaxSum(A, 7);
// //     return 0;
// // }
