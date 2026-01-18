#include <iostream>
using namespace std;
class student
{
public:
    string Name;
    float CGPA;

    void accept(string Name)
    {
        this->Name = Name;
    }
    void accept(float CGPA)
    {
        this->CGPA = CGPA;
    }

    void display()
    {
        cout << "Name : " << Name << endl ;
        cout << "CGPA : " << CGPA << endl ;
        cout << endl ; 
    }
};
int main()
{
    student yash ;
    yash.accept("Yash");
    yash.accept(8.68);
    yash.display();
    return 0 ;
}