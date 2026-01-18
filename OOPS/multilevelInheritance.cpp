#include<iostream>
using namespace std ;
class Garage{
public :
    string company ;
    string type ;
    string color ;

    void getCompany(string companyName){
        company = companyName ;
    }

    void gettype(string typeVal){
        type = typeVal ;
    }

    void getColor(string colorName){
        color = colorName ;
    }
};

class BMW : public Garage{
public :
    
    string engine ;
    string year ;

   
    void getengine(string engineName){
        engine = engineName ;
    }
    void getyear(string yearLaunched){
        year = yearLaunched ;
    }

};

class M_series : public BMW {
public : 
    string model ;
    void getmodel(string modelName){
        model = modelName ;
    }
};
int main()
{
   M_series M5 ;
   M5.getCompany("BMW") ;
   M5.getmodel("M5 Competition") ;
   M5.getengine("I6") ;
   M5.getyear("2025") ;
   M5.getColor("Ash-Grey") ;
   M5.gettype("Coupe") ;

   cout << M5.company << endl ;
   cout << M5.model << endl ;
   cout << M5.engine << endl ;
   cout << M5.year << endl ;
   cout << M5.color << endl ;
   cout << M5.type << endl ;
}