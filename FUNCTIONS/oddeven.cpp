#include<iostream>
using namespace std ;
void EvenORodd(int x )
{
   if (x%2==0)
   {
     cout << "Number is even " ;
   } else
   {
      cout << "Number is odd " ;
   }
}

int main()
{
    int n ;
    cout << "Enter thevalue of n : " ;
    cin >> n ;
    EvenORodd(n);
    return 0 ;
}