#include <iostream>
#include <string.h>
using namespace std;
void toLowerCase(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }else if (ch == ' ')
        {
            continue; 
        }else {
            word[i] = ch - 'A' + 'a' ;
        }
        
    }
}
int main()
{
    char word[] = "HellO woRLD tHIS is YASh " ;
    cout << word << endl ;
    cout << "LowerCase : " ;
    toLowerCase(word,strlen(word)) ;
    cout << word << endl ;
    return 0 ;
}