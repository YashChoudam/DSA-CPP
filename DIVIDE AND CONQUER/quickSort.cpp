#include<iostream>
using namespace std ;
void display(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  " ;
    }
    cout << endl ;
}
int partition(int arr[], int start , int end){
    int i = start - 1 ;
    int pivot = arr[end] ;
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++ ;
            swap(arr[i],arr[j]);
        }
        
    }
    i++ ;
    swap(arr[i],arr[end]);
    return i ; 
}

void quickSort(int arr[], int start , int end){
    if (start >= end)
    {
        return ;
    }
    
    int pivot = partition(arr,start,end);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}
int main()
{
    int A[] = {6, 3, 7, 5, 2, 4};
    int n = 6 ;
    quickSort(A,0,n-1);
    display(A,n);
    return 0 ;
}