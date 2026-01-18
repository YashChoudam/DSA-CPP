#include<iostream>
using namespace std ;
void LinearSearch(int A[] , int n , int key)
{
    int flag = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (A[i]==key)
        {
            cout << key << " is present at " << i << " th index of the given array " << endl ;
            flag++;
        }
        
    }
    if (flag==0)
    {
        cout << key << " do not exist in the given array " << endl ;
    }
}
int main()
{
    int A[10] = {1,14,15,488,795,178,79,464,494,10000};
    int n = sizeof(A)/sizeof(A[0]) ;
    LinearSearch(A,n,178);
    return 0 ;
} 