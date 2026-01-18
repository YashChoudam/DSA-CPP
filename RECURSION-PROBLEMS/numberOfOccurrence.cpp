#include <iostream>
using namespace std;
void numberOfOccurrence(int arr[], int n, int index, int key)
{
    if (index == n)
    {
        return;
    }

    if (arr[index] == key)
    {
        cout << index << "  ";
        numberOfOccurrence(arr, n, index + 1, key);
    }
    else
    {
        numberOfOccurrence(arr, n, index + 1, key);
    }
}
int main()
{
    int arr[] = {3,2,4,5,6,2,7,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2 ;
    numberOfOccurrence(arr,n,0,key);
    return 0 ;
}