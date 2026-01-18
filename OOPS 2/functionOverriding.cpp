#include<iostream>
using namespace std ;
class parentClass{
public: 
    void display()
    {
        cout << "this is a function from parentClass " ;
    }
};

class child : public parentClass{
public:
    void display()
    {
        cout << "This is a function from child class " ;
    }
};
int main()
{
    child c1 ;
    c1.display() ;
}