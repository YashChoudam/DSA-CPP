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
void InsertionSort(int arr[],int n)
{
    int temp = 0 ;
    for (int i = 1; i < n; i++)
    {
        int current = arr[i] ;
        int previous = i - 1 ;
        while (previous>=0 && arr[previous]>current)
        {
            temp = arr[previous] ;
            arr[previous] = arr[previous + 1] ;
            arr[previous + 1] = temp ;
            previous-- ;
        }
        arr[previous + 1] = current ;
    }
    
}
int main()
{
    int A[] = { 2,4,1,3,9,11,5} ;
    int n = sizeof(A) / sizeof(A[0]) ;
    Display(A, n);
    cout << "Sorted Array is as follows  " << endl ;
    InsertionSort(A, n);
    Display(A, n);
    return 0 ;
}







// #include<iostream>
// using namespace std ;
// void PrintArray(int arr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
//     cout << endl ;
// }
// void InsertionSort(int arr[],int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int previous = i-1 ;
//         while (previous>=0 && arr[previous] > key )
//         {
//             swap(arr[previous],arr[previous+1]) ;
//             previous-- ;
//         }
//         arr[previous + 1] = key ;
//     }
//     PrintArray(arr,n);
// }
// int main()
// {
//     int arr[] = {5,4,1,3,2} ;
//     cout << "Given array is equal to : " ;
//     PrintArray(arr,5);
//     cout << "Sorted array is as follows : " ;
//     InsertionSort(arr,5);
//     return 0 ; 
// }