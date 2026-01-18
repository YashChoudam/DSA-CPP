#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector <int> vec = {1,2,3,4} ;
    cout << "Size of vector :  " <<vec.size() << endl ;
    cout << "Capacity of vector :  " <<vec.capacity() << endl ;
    cout << "Before insertion after capacity exceeds "  << endl ;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " " ;
    }
    cout << endl ;
    

    cout << "After push " << endl ;
    vec.push_back(5) ; 
     for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " " ;
    }
    cout << endl ;
    cout << "Size of vector :  " <<vec.size() << endl ;
    cout << "Capacity of vector :  " <<vec.capacity() << endl ;


    return 0 ;
    
}