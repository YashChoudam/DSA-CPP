#include <iostream>
using namespace std;
void Display(int arr[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void BubbleSort(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = { 2,4,1,3,9,11,5} ;
    int n = sizeof(A) / sizeof(A[0]) ;
    Display(A, n);
    cout << "Sorted Array is as follows  " << endl ;
    BubbleSort(A, n);
    Display(A, n);
    return 0 ;
}

// #include <iostream>
// using namespace std;
// void Print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void bubbleSort(int arr[], int n)
// {
//     // Sorted in descending order

//     for (int i = 0; i < n - 1; i++)
//     {
//         bool isSwap = false;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }

//             if (isSwap == false)
//             {
//                 cout << "Given array is already sorted " << endl;
//                 return;
//             }
//         }
//     }

//     cout << "sorted array is as follows : ";
//     Print(arr, n);
// }
// void BubbleSort(int arr[], int n)
// {
//     // Sorting array in ascending order
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool isSwap = false ;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//             if (!isSwap)
//             {
//                 cout << "Given array is already sorted  " << endl ;
//                 return ;
//             }

//         }
//     }
//     cout << "Sorted array is as follows : ";
//     Print(arr, n);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     BubbleSort(arr, n);
//     bubbleSort(arr, n);
//     return 0;
// }