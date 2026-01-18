#include <iostream>
using namespace std;
int main()
{
    int a;
    float pi = 3.14;
    int *ptr = &a;
    float *ptr2 = &pi;

    cout << ptr << endl; 
    cout << &a << endl;
    cout << sizeof(ptr) << endl ;
    cout << sizeof(ptr2) << endl ;
    return 0;
}