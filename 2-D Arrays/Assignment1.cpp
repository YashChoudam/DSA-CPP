/*
Print the number of all 7’s that are in the 2d array.
Example: Input-int arr[][] = { {4,7,8},{8,8,7}}; n=2, m=3 Output-2
*/
#include<iostream>
using namespace std ;
int main()
{
    int arr[2][3] = {
        {4,7,8},
        {8,8,7}
    } ;
    int key = 7 ;
    int count = 0 ;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==key)
            {
                count++ ;
            }
            
        }
        
    }
    cout << "Number of " << key << " is equal to : " << count ;
    return 0 ;
}