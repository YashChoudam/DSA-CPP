#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string str ;
    cout << "Enter the string : " ;
    getline(cin,str) ;
    for(char ch : str)
    {
        cout << ch << " " ;
    }
 cout << endl ;
 return 0 ;
}