#include <iostream>
using namespace std;
void BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (n - 1) / 2;

    if (arr[mid] == key)
    {
        cout << key << " is present at the " << mid << " index of the array " << endl;
    }
    else if (arr[mid] < key)
    {
        start = mid + 1;
        int flag = 0;
        for (int i = start; i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << key << " is present at the " << i << " th index of the array " << endl;
                flag++;
            }
        }
        if (flag == 0)
        {
            cout << key << " is not present in the array " << endl;
        }
    }
    else if (arr[mid] > key)
    {
        end = mid - 1;
        int flag = 0;
        for (int i = 0; i < end; i++)
        {
            if (arr[i] == key)
            {
                cout << key << " is present in the " << i << " th index of the array " << endl;
                flag++;
            }
        }
        if (flag == 0)
        {
            cout << key << " is not present in the array " << endl;
        }
    }
}
int main()
{
    int A[] = {1,2,4,9,18,20,41,100,133,2345,13900} ;
    int n = sizeof(A)/sizeof(int) ;
    int key ;
    cout << "Entered array is as follows " << endl ;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "," ;
    }
    cout << endl ;
    
    cout << "Enter the element you want to search in the array : " ;
    cin >> key ;
    BinarySearch(A,n,key) ;
    return 0 ; 
}