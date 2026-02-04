#include<iostream>
#include<list>
#include<iterator>
using namespace std ;


void printLL(list<int> ll){
    list<int>:: iterator itr ;
    for (itr = ll.begin(); itr != ll.end(); itr++)
    {
        cout << (*itr) << "-> ";
    }
    cout << "NULL" << endl;
}
int main()
{
    list<int> ll ;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    
    for (int x : ll)
    {
        cout << x << " ";
    }
    cout << endl ;
    cout << ll.front() << endl ;
    cout << ll.back() << endl ;
    printLL(ll);
    return 0 ;
}