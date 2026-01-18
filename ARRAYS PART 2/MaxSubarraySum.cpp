#include <iostream>
using namespace std;
void MaxSubarraySum(int arr[], int n)
{
    int maxSum = INT16_MIN ;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int sum = 0;
            for (int i = start; i <= end; i++)
            {

                sum = sum + arr[i];    // Time Complexiety = O(n^3)
                
            }
            cout << sum << " ";
            // maxSum = max(maxSum , sum) ;
            if (maxSum<sum)
            {
                maxSum = sum ;
            } 
        }
        cout << endl;
        
    }
    cout << "The maximum sum of subarray is equal to : "<< maxSum << endl ;
}
int main()
{
    int A[6] = {1, 2, -5, 6, 4, -7};
    cout << "Sum of subarrays is as follows : " << endl;
    MaxSubarraySum(A, 6);
    return 0;
}