#include <iostream>
using namespace std;
void BinarySearch(int A[], int n, int key)
{
    int start = 0;
    int end = n - 1 ;
    int flag = 0 ;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (A[mid] == key)
        {
            cout << key << " is present at the " << mid << " th index of the array";
            flag++ ;
            break ;
        }
        else if (A[mid] < key)
        {
            start = mid + 1 ;
        }
        else if (A[mid] > key)
        {
            end = mid - 1 ;
        }
    }
    if (flag==0)
    {
        cout << key << " is not present inside the given array " ;
    }
    
}
void LinearSearch(int arr[], int n, int key)
{
  int flag = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      cout << key << " is present at " << i << " th index of the array " << endl;
      flag++ ;
      break ;
    }
  }
  if(flag==0)
  {
    cout << key << " is not present in the array " << endl ;
  }
}
int main()
{
    int n = 10 ; 
    int a[10] = {1,12,123,1234,12345,123456,1234567,12345678,123456789,1234567890} ;
    BinarySearch(a,n,123456) ;
    return 0 ;
}