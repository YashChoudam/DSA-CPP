#include<iostream>
using namespace std ;
class example{
public:
    static int x ;
};
int example:: x = 0 ; // we declare non - constant variables outside the class in global scope 
int main()
{
    example obj1, obj2 ,obj3 ;
    cout << "x : "<< obj1.x++ << endl ;
    cout << "x : "<< obj2.x++ << endl ;
    cout << "x : "<< obj3.x++ << endl ;
    cout << "x : "<< obj3.x << endl ;
}