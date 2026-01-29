#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void accept(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
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
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current)
        {
            swap(arr[previous], arr[previous + 1]);
            previous--;
        }
        arr[previous + 1] = current;
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}
int main()
{
    int arr[] = {1, 3, 2, 6, 5, 4};
    display(arr, 6);
    cout << "Sorted Array : ";
    bubbleSort(arr, 6);
    display(arr, 6);
    return 0;
}