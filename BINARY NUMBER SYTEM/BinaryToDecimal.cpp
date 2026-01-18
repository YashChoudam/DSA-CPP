#include<iostream>
using namespace std ;
void bintodec(int binNum)
{
   int n = binNum ;
   int decNum = 0 ;
   int power = 1 ;

  while (n>0)
  {
    int lastdigit = n%10 ;
    decNum += lastdigit*power ;
    power = power*2 ;
    n = n/10 ;

  }
  cout << "Decimal conversion of "<< binNum <<"is equal to :"<<decNum ;
  
}
int main()
{
    int a = 1000100 ;
    bintodec(a);
    return 0;
}