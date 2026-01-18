#include<iostream>
#include<string.h>
using namespace std ;
void Reverse(char str[] , int n)
{
    int start = 0 ;
    int end = n - 1 ;
    while(start < end)
    {
        swap(str[start++] , str[end--]) ;
        //start++ , end -- ;
    }
}
int main()
{
    char string[] = "Hello world" ;
    cout << string << endl ;
    Reverse(string , strlen(string) ) ;
    cout << "Reversed array is : " << string  << endl ;
    return 0 ;
}