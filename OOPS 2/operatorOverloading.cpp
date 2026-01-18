#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex(int real, int img)
    {
       this->real = real ;
       this->img = img ;
    }

    void display()
    {
        cout << real << " + " << img << "i " << endl;
    }

    Complex operator + (Complex &obj)
    {
        int resReal = this->real + obj.real ;
        int resImg = this->img + obj.img ;
        Complex result(resReal , resImg) ;
        return result ;
    }
};

int main()
{
    Complex c1(2,1) ;
    Complex c2(7,4) ;
    c1.display();
    c2.display();
    Complex c3 = c1 + c2 ;
    cout << "Result : " ;
    c3.display();
    return 0 ;
}