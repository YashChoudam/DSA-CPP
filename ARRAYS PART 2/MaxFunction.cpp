#include<iostream>
using namespace std ;
void MaxSumSubarray(int arr[],int n)
{
    int maxSum = INT32_MIN ;
    for (int start = 0; start < n; start++)
    {
        for (int end = start ; end < n; end++)
        {
            int currentSum = 0 ;
            for (int i = start ; i <= end ; i++)
            {
                currentSum = currentSum + arr[i] ;
            }
            cout << currentSum << " " ;
            maxSum = max(maxSum,currentSum);
            
        }
        cout << endl ;
        
    }
    cout << "Maximum sum of the subarray is equal to : " << maxSum << endl ;
}
int main()
{
    int A[] ={2,-3,6,-5,4,2} ;
    MaxSumSubarray(A,6) ;
    return 0 ;
}



// #include<iostream>
// using namespace std ;
// void MaxSumSubarray(int arr[], int n)
// {
//     int maxSum = INT32_MIN ;
//     for (int start = 0; start < n; start++)
//     {
//         for (int end = start ; end < n; end++)
//         {
//             int currentSum = 0 ;
//             for (int i = start ; i <= end; i++)
//             {
//                 currentSum = currentSum + arr[i] ;
//             }
//             cout << currentSum << " " ;
//             maxSum = max(currentSum,maxSum) ;
//         }
//         cout << endl ;
//     }
//     cout << "Maximum sum of the subarray : "<< maxSum ;
    
    
// }
// int main()
// {
//     int A[7] = {1,2,5,-8,3,-1,10} ;
//     MaxSumSubarray(A,7);
//     return 0 ;
// }























// // #include <iostream>
// // using namespace std;
// // void MaxSumSubarray(int arr[], int n)
// // {
// //     int maxSum = INT32_MIN;

// //     for (int start = 0; start < n; start++)
// //     {
// //         for (int end = start; end < n; end++)
// //         {
// //             int currentSum = 0;
// //             for (int i = start; i <= end; i++)
// //             {
// //                 currentSum = currentSum + arr[i] ; // Time Complexiety = O(n^3)
                
// //             }
// //             maxSum = max(currentSum, maxSum);
// //             //    cout << currentSum << ",";
// //         }
// //     }
// //      cout << "The maximum sum of subarray is equal to :" << maxSum << endl;
// // }

// // int main()
// // {
// //     int A[6] = {1, 2, 5, 6, 4, 7};
// //     cout << "Sum of subarrays is as follows : " << endl;
// //     MaxSumSubarray(A, 6);
// //     return 0;
// // }