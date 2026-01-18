#include<iostream>
using namespace std ;
bool isPrime(int x)
{
    if (x==1)
    {
        return false ;
    }
    for (int i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            return false ;
        }
        
    }
    
    return true ;
    
}
void printprime(int n)
{
    for (int i = 2; i <= n; i++)
    {
      if (isPrime(i))
      {
        cout << i << " " ;
      }
    }
    
    cout << endl ;
}
int main()
{
    int n ;
    cout << "Enter n : " ;
    cin >> n ;
    printprime(n);
    return 0 ;
}