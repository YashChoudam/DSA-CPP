#include<iostream>
#include<string>
using namespace std ;

class User{
private :
    string ID ;
    string Password ;
public :
    string UserName ;
    
    User()
    {
        cout << "User is being created " << endl ;
    }

    User(string ID)
    {
        this->ID = ID ;
        cout << "User ID " << ID  << " is initiazlied " << endl ;
    }
    
    void setPassword(string Password){
        this->Password = Password ;
    }

    void getPassword(){
        cout << "Password : " << Password << endl ;
    }
};
int main()
{
    User U1("Yash Madhav Choudam ") ;
    U1.setPassword("10000") ;
    U1.getPassword();
    return 0 ;
    
}