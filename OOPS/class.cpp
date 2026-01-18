#include<iostream>
using namespace std ;

class Student {
    public :
    string student_name ;
    float cgpa ;
    void getPercentage(){
        cout << "Percentage is equal to : " << cgpa*10 << endl ;
    }
};

int main()
{
    Student s1 ;
    s1.student_name = "Yash Madhav Choudam";
    s1.cgpa = 8.68 ;
    s1.getPercentage() ;
    return 0 ;

}