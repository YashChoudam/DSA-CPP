#include<iostream>
using namespace std ;
void ClearIbits(int num , int i ) 
{
    int bitmask = (~0) << i ;
    num = num & bitmask ;
    cout << num << endl ;

}
int main()
{
    ClearIbits(15,2) ;
    return 0 ;
}