#include <iostream>
using namespace std;
class students
{
public:
    string Name;
    long int PRN;
    float cgpa;

    students()
    {
        cout << "Constructor being initiated " << endl;
    }

    void accept(string Name, long int PRN, float cgpa)
    {
        this->Name = Name;
        this->PRN = PRN;
        this->cgpa = cgpa;
    }
    void display()
    {
        cout << "Name : " << Name << endl;
        cout << "PRN : " << PRN << endl;
        cout << "CGPA : " << cgpa << endl;
    }
};
class UniversityStudents : public students{
public:
    string University_Name ;
    long int stypend ;
    
    void accept(string NAME , long int PRN , float CGPA , string UniversityName , long int Stypend)
    {
        this->Name = NAME ;
        this->PRN = PRN ;
        this->cgpa = CGPA ;
        this->University_Name = UniversityName ;
        this->stypend = Stypend ;
    }
    void display()
    {
        cout << "NAME : " << Name << endl ;
        cout << "PRN : " << PRN << endl ;
        cout << "CGPA : " << cgpa << endl ;
        cout << "University Name  : " << University_Name << endl ;
        cout << "Stypend: " << stypend << endl ;
    }
};
int main()
{
    UniversityStudents Yash ;
    Yash.accept("Yash Madhav Choudam",1032231195,8.23,"MIT-WPU",100000);
    Yash.display();
    return 0 ;
}