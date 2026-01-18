#include <iostream>
using namespace std;
int search(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    if (start > end)
    {
        return -1;
    }

    // If true then mid on line L1 , if false then on L2
    if (arr[start] <= arr[mid])
    {
        if (arr[start] <= target && target <= arr[mid])
        {
            search(arr, start, mid - 1, target);
        }
        else
        {
            search(arr, mid + 1, end, target);
        }
    }
    else
    {
        if (arr[mid] <= target && target <= arr[end])
        {
            search(arr, mid + 1, end, target);
        }
        else
        {
            search(arr, start, mid - 1, target);
        }
    }
}
int main()
{
    int A[] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    cout << "Position of 0 is : " << search(A, 0, n - 1, 0);
    return 0;
}