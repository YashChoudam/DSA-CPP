#include<iostream>
using namespace std ;
int MaxProduct(int arr[],int n)
{
    int MaxTillnow = arr[0] ;
    int MinTillnow = arr[0] ;
    int answer = MaxTillnow ;

    for (int i = 1; i < n; i++)
    {
        int current = arr[i] ;
        int temp = max(current ,max( MaxTillnow*current , MinTillnow*current )) ;
        MinTillnow = min (current , min( MaxTillnow*current , MinTillnow*current )) ;
        MaxTillnow = temp ;
        answer = max(answer , MaxTillnow) ;
    }
    return answer ;
    
}
int main()
{
    int Numbers[] = {1,-2,3,6,8} ;
    int n = sizeof(Numbers)/sizeof(Numbers[0]) ;
    cout << "Maximum product is equal to : " << MaxProduct(Numbers,n);
    return 0 ;
}