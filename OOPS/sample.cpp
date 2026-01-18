#include<iostream>
using namespace std ;
class students{
public:
    string NAME ;
    long int PRN ;
    float CGPA ;

    students()
    {
        cout << "Constructor being initiated " << endl ;
    }
    void accept(string NAME , long int PRN , float CGPA) 
    {
        this->NAME = NAME ;
        this->PRN = PRN ;
        this->CGPA = CGPA ;
    }

    void display()
    {   
        cout << endl ;
        cout << "NAME : " << NAME << endl ; 
        cout << "PRN: " << PRN << endl ; 
        cout << "CGPA : " << CGPA << endl ;
        cout << endl ; 
    }
};
class universityStudents : public students{
public:
    string UniversityName ;
    long int Stypend ;

    void accept(string NAME , long int PRN , float CGPA , string UniversityName , long int Stypend)
    {
        this->NAME = NAME ;
        this->PRN = PRN ;
        this->CGPA = CGPA ;
        this->UniversityName = UniversityName ;
        this->Stypend = Stypend ;
    }
    void display()
    {
        cout << "NAME : " << NAME << endl ;
        cout << "PRN : " << PRN << endl ;
        cout << "CGPA : " << CGPA << endl ;
        cout << "University Name  : " << UniversityName << endl ;
        cout << "Stypend: " << Stypend<< endl ;
    }
};
int main()
{
    universityStudents yash ; 
    //yash.display() ;
    yash.accept("YASH MADHAV CHOUDAM",1032231195,8.25,"MIT-WPU",70000);
    yash.display();

    return 0 ;
}