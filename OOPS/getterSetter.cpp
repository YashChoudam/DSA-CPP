#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    float cgpa;

public:
    void setName(string nameVal)
    {
        name = nameVal;
    }

    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    void getName()
    {
        cout << "Name : " << name << endl;
    }

    void getCgpa()
    {
        cout << "CGPA : " << cgpa << endl;
    }

    void getPercentage()
    {
        cout << "Percentage : " << (cgpa * 10) << endl;
    }
};
int main()
{
    Student s1 ;
    s1.setName("YASH MADHAV CHOUDAM");
    s1.setCgpa(8.68) ;
    s1.getName();
    s1.getCgpa();
    s1.getPercentage() ;
    return 0 ;
    
}