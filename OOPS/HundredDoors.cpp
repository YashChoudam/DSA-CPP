#include <iostream>
using namespace std;
int main()
{
    int isOpen[101] = {0};
    for (int i = 1; i <= 100; i++) // doors
    {
        for (int j = 1; j <= 100; j++)
        { 
            if (isOpen[i] == 0 && i % j == 0)
            {
                isOpen[i] = 1;
            }
            else if (isOpen[i] == 1 && i % j == 0)
            {
                isOpen[i] = 0;
            }
        }
    }

    cout << "Open doors are as follows : " ;
    for (int i = 1; i <= 100; i++)
    {
        if (isOpen[i]==1)
        {
            cout << i << "  " ;
        }
        
    }
    cout << endl ;
    return 0 ;
}