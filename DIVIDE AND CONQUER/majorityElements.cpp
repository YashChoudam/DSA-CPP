#include <iostream>
#include <vector>
using namespace std;
int countRange(int arr[], int nums, int start, int end)
{
    int count = 0;
    for (int i = start; i < end; i++)
    {
        if (arr[i] == nums)
        {
            count++;
        }
    }
    return count ;
}
int majorityElement(int arr[], int start, int end)
{
    // Base case when the array has only 1 element in it therefore 1st and last elment will be same so return it
    if (start == end)
    {
        return arr[start];
    }

    // recursive call for searching majority elements in left and right halves
    int mid = start + (end - start) / 2;
    int left = majorityElement(arr, start, mid);
    int right = majorityElement(arr, mid + 1, end);

    // If both halves agree on the majority element return it
    if (left == right)
    {
        return left;
    }

    int leftCount = countRange(arr, left, start, end);
    int rightCount = countRange(arr, right, start, end);

    return leftCount > rightCount ? left : right;
}
int main()
{
    int A[] = {3,2,2,4,3,1,5,1,4,1,2,4,3,2,3,3,3};
    int n = sizeof(A)/sizeof(A[0]);
    cout << "Majority elements in A : " << majorityElement(A,0,n-1) << endl ;
    return 0 ;
}