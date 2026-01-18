#include<iostream>
using namespace std ;
void decTobinary(int n)
{
    int Binary[32] ;
    int i = 0 ;
    while (n > 0)
    {
        Binary[i] = n % 2 ;
        n = n/2 ;
        i++ ;
    }
    for (int j = i-1 ; j >= 0 ; j--)
    {
        cout << Binary[j] << " " ;
    }
    cout << endl ;
}
void DecimalTobinary(int decimal)
{
    int n = decimal ;
    int binary = 0 ;
    int power = 1 ;
    while (n>0)
    {
        int lastdigit = n%2 ;
        binary = binary + lastdigit*power ;
        power = power*10 ;
        n = n/2 ;
    }
    cout << "Binary of conversion of " <<  decimal << " is :  " << binary  << endl ; 
    
}
void binaryTodecimal(int binary)
{
  int n = binary ;
  int decimal = 0 ;
  int power = 1 ;
  while (n>0)
  {
    int lastdigit = n%10 ;
    decimal = decimal + lastdigit*power ; 
    power = power*2 ;
    n = n/10 ;
  }
  cout << "Decimal conversion of " << binary << " is : " << decimal << endl ;
}

int main()
{
    int n ;
    cout << "Enter the number for conversion to binary : " ;
    cin >> n ;
    decTobinary(n) ;
    DecimalTobinary(123) ;
    binaryTodecimal(11110) ;
    return 0 ;
}