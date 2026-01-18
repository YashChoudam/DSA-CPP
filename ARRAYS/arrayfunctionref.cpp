#include<iostream>
using namespace std ;
void Change ( int *ptr)
{
   *ptr = 10000 ;
}
int main ()
{
   int a = 5 ;
   int *ptr = &a ;
   cout << ptr << endl;
   cout <<*ptr << endl;
   Change( ptr) ;
   cout << *ptr << endl ;
   return 0 ;
}