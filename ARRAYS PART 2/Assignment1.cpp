/*

*/
#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
    cout << "sorted array is as follows : " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
}
bool Nums(int arr[], int n) // we can only use this logic if the given array is sorted
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int nums[] = {1, 2, 3, 4 , 1 ,2 };
    int n = sizeof(nums) / sizeof(nums[0]);
    BubbleSort(nums, n);
    cout << "If the array satisfies the condition of multiple occurence of the element : " << Nums(nums,n);
   
    return 0;
}