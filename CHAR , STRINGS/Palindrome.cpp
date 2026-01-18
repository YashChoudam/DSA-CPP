#include<iostream>
#include<string.h>
using namespace std ;
bool palindrome(char str[] , int n)
{
    int start = 0 ;
    int end = n - 1 ;
    while (start < end)
    {
        if (str[start] != str[end] )
        {   
            cout <<"Invalid Palindrome";
            return false ;   
        }
        start++ ; 
        end-- ;
    }
    cout << "Valid Palindrome " ;
    return true ;
    
}
int main()
{
    char str[] = "racecar" ;
    //cout << str << " is palindrome or not : " << palindrome(str , strlen(str)) ;
    palindrome(str,strlen(str));
    return 0 ;
} 