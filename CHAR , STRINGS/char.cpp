#include<iostream>
#include<string.h>
using namespace std ;
int main()
{
    char str[] = "code" ; // size = 5 coz we store null charecter '\0' after every string 
    //cout << str << endl ;
    //cout << sizeof(str) ;

    char sentence[50];
    cout << "Enter the string : " ;
    cin.getline(sentence,50) ;
    cout << sentence << endl ;
    cout << strlen(sentence) << endl ;

    return 0 ;
}