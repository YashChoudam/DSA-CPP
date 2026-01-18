#include <iostream>
using namespace std;

void accept(int arr[], int n)
{
    cout << "Enter the elements of the array : " << endl;
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

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted Array " << endl;
    display(arr, n);
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    cout << "Sorted Array : " << endl;
    display(arr,n);
}
void insertionSort(int arr[], int n)
{
    
}
int main()
{
    int n;
    cout << "Enter the total number of elements in the array ";
    cin >> n;
    int A[n];
    accept(A, n);
    display(A, n);
    // bubbleSort(A, n);
    selectionSort(A,n);
    return 0;
}