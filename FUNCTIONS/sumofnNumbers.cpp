#include<iostream>
using namespace std ;
int sum(int x )
{
    int result = 0 ;
    for (int i = 1; i <= x; i++)
    {
        result = result + i ;
    }
   return result ; 
}
int main()
{
    int n ;
    cout << "Enter the value of n : " ;
    cin >> n ;
    cout << "sum of first n natural numbers is equal to : " << sum(n) ;
    return 0 ;

}

