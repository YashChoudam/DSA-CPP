#include <iostream>
#include <vector>
using namespace std;
void display(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  " ;
    }
    cout << endl ;
}
void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[j++]);
        }
        else
        {
            temp.push_back(arr[i++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }
    for (int index = start, x = 0; index <= end; index++)
    {
        arr[index] = temp[x++];
    }
}
void mergeSort(int arr[], int start , int end)
{
    int mid = start + (end-start)/2 ;
    if (start >= end)
    {
        return ; 
    }
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main()
{
  int A[] = {6,3,7,5,2,4} ;
  int n = 6 ;
  mergeSort(A,0,n-1) ;
  display(A,n);
  return 0 ;   
}