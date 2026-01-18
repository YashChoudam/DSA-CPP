#include <iostream>
#include<algorithm>
using namespace std;
void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void CountingSort(int arr[], int n)
{

    int frequency[10000] = {0}; // no of elements in frequency array is equal to the range
    int minVal = INT32_MAX;
    int maxVal = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 1st step 
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    for (int i = minVal,j=0 ; i <= maxVal; i++)
    {
        while (frequency[i]>0)
        {
            arr[j++] = i ;
            frequency[i]-- ;    
        }
           
    }
    
}
int main()
{
    int arr[] = {1,4,1,3,2,4,3,7} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    //CountingSort(arr,8);
    sort(arr,arr+n) ;
    Print(arr,n);

    return 0 ;
}