#include<iostream>
using namespace std ;
int MaxSum(int arr[], int n)
{
    int maxSum = 0 ;
    int currentSum = 0 ;
    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i] ;
        maxSum = max(currentSum,maxSum) ;
        if (currentSum<0)
        {
            currentSum = 0 ;
        }
        
    }
    return maxSum ;
    
}
int main()
{
    int A[] ={2,-3,6,-5,4,2} ;
    cout << "Maximum sum is equal to : " << MaxSum(A,6) ;
    return 0 ;
}










// #include<iostream>
// using namespace std ;
// int MaxSum(int arr[],int n)
// {
//     int maxSum = 0 ;
//     int currentSum = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         currentSum = currentSum + arr[i] ;
//         maxSum = max(currentSum,maxSum);
//         if (currentSum<0)
//         {
//             currentSum = 0 ;
//         }
//     }
//     return maxSum ;
// }
// int main()
// {
//     int A[] ={2,-3,6,-5,4,2} ;
//     cout << "Maximum sum is equal to : " << MaxSum(A,6) ;
//     return 0 ;
// }