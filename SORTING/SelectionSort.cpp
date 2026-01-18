#include<iostream>
using namespace std ;
void Display(int arr[], int n)
{
    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void SelectionSort(int arr[],int n)  // descending order
{
    int temp = 0 ;
    for (int i = 0; i < n-1 ; i++)
    {
        int min_index = i ;
        for (int j = i + 1 ; j < n; j++)
        {
            if (arr[j] >  arr[min_index])
            {
                min_index = j ;
            }
            
        }
        temp = arr[i] ;
        arr[i] = arr[min_index] ;
        arr[min_index] = temp ;
        
    }
    
}
void SelectionSort1(int arr[], int n) // ascending order 
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        // Loop to find minimum 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
           
        }
        swap(arr[i], arr[minIndex]);
    }
   
}
int main()
{
    int A[] = { 2,4,1,3,9,11,5} ;
    int n = sizeof(A) / sizeof(A[0]) ;
    Display(A, n);
    cout << "Sorted Array is as follows  " << endl ;
    SelectionSort(A, n);
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

// void SelectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         // Loop to find minimum 
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
           
//         }
//         swap(arr[i], arr[minIndex]);
//     }
//     Print(arr,n);
// }
// int main()
// {
//     int arr[] = {64, 34, 25, 12, 22, 10} ;
//     cout << "Given array is as follows : " ;
//     Print(arr,6) ;
//     cout << "Sorted array is as follows : " ;
//     SelectionSort(arr,6) ;
//     return 0 ;


// }