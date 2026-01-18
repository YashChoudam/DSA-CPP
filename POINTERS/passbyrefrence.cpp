#include<iostream>
using namespace std ;
void ChangeA(int *ptr)
{
  *ptr = 20 ;
  cout << *ptr << "\n" ;
}

int main()
{
    int a ;
    a = 10 ; 
    int *ptr1 = &a ;
    ChangeA(ptr1);
    cout << a << "\n" ;
    return 0 ;
}