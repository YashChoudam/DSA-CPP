#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int> vec1 ;
    vector<int> vec2 = {1,2,3,4,5} ;
    vector<int> vec3(5,2) ;
    for (int i = 0; i < 5; i++)
    {
        cout << vec2[i] << " " ;
    }
    cout << endl ;
    for (int j = 0; j < 5; j++)
    {
        cout << vec3[j] << " " ;
    }
    
    cout << endl ;
    
}