#include<iostream>
#include<string>
using namespace std ;

// Abstract class
class shape{
public:
    virtual void draw()  = 0 ; // pure virtual function
};

class circle : public shape {
public:
    void draw(){
        cout << "Draw circle " << endl ;
    }
};

class square : public shape {
public:
    void draw(){
        cout << "Draw square " << endl ;
    }
};

int main()
{
    circle c1 ;
    c1.draw() ;
    square s1 ;
    s1.draw() ;
    return 0 ;
}