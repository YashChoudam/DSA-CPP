#include<iostream>
using namespace std ;
void ChangeA(int &parameter)
{
    parameter = 25 ;
    cout << parameter << "\n" ;
}

int main()
{
    int a = 10 ;
    cout << a << "\n" ;
    ChangeA(a);
    cout << a ;
    return 0 ;
}



























// #include<iostream>
// using namespace std ;
// void ChangeA(int &x)
// {
//     x = 20 ;
//     cout << x << endl;

// }

// int main()
// {
//     int a = 10 ;
//     int &b = a ;
//     cout << a << endl ;
//     ChangeA(b);
//     cout << b << endl ;
//     cout << a << endl ;
//     return 0 ;
    
// }