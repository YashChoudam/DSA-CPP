#include<iostream>
using namespace std ;
int main()
{

    bool IsAMan ;
    int age ;
    cout << "Enter your age : ";
    cin >> age ;
    IsAMan = (age >= 19)? true:false;
    cout << IsAMan ;
    return 0 ;
}