#include<iostream>
#include<string.h>
using namespace std ;
void ToLowecase(char word[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if(ch>='a' && ch<='z')
        {
            continue;
        }else if(ch==' ')
        {
           continue;
        }
        else {
            word[i] = ch - 'A' + 'a' ;
        }

    }
    
}
int main()
{
    char word[] = "HelLo WoRld THis is Yash" ;
    cout << word << endl ;
    ToLowecase(word , strlen(word));
    cout << word << endl ;
    return 0 ;

}