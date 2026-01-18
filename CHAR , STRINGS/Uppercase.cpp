#include <iostream>
#include<string.h>
using namespace std;
void ToUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            // upper case
            continue;
        } else if(ch==' ')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main()
{
    char word[] = "ApPle iS GooD foR HealTH";
    cout << word << endl ;
    ToUpper(word, strlen(word));
    cout << word << endl ;
    return 0;
}