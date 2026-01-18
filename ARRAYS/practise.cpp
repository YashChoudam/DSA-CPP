#include <iostream>
using namespace std;
void accept(int arr[], int n)
{
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}
void display(int arr[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1 ;
}

int main()
{
    int n;
    cout << "Enter the total number of elements in the array";
    cin >> n;
    int A[n];
    accept(A, n);
    display(A, n);
    cout << binarySearch(A,n,5);
    return 0 ;
}