#include<iostream>
using namespace std ;
class parentClass{
public: 
    void display()
    {
        cout << "this is a function from parentClass " << endl ;
    }

    virtual void hello()
    {
        cout << "Hello from parent class " << endl ;  
    }
};

class child : public parentClass{
public:
    void display()
    {
        cout << "This is a function from child class " << endl ;
    }

    void hello()
    {
        cout << "Hello from child class " << endl ;  
    }
};
int main()
{
    child c1 ;
    parentClass *ptr ;
    ptr = &c1 ;
    c1.display() ;
    c1.hello() ;
    ptr->hello();
    return 0 ;
}