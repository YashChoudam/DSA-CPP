#include <iostream>
using namespace std;
void print(int arr[], int n , int index)
{
   if (n==index)
   {
    return ;
   }
   cout << arr[index] << " " ;
   print(arr,n,index+1);
}
int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(A, 10,0);
    return 0;
}