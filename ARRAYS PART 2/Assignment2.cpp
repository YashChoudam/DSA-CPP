#include <iostream>
using namespace std;
int Search(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int flag = 0; 
    int Index ;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            flag++;
            Index = mid ;
            break ;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    if (flag == 0)
    {
        return -1;
    }
    return Index ;
}
int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    int result = Search(nums, n, 0);
    cout << result;
}
