#include<iostream>
#include<string>
using namespace std ;
class Cars{
public :
    string Brand ;
    string Model ;
    string color ;

    void getBrand(string BrandName)
    {
        Brand = BrandName ;
    }

    void getColor(string ColorVal)
    {
        color = ColorVal ;
    }

    void getModel(string ModelName)
    {
        Model = ModelName ;
    }
};
class BMW : public Cars {
public :
    string Engine ;
    string Type ;

    void getEngine(string EngineType){
        Engine = EngineType ;
    }

    void getType(string carType){
        Type = carType ;
    }

};

int main()
{
    BMW c1 ;
    c1.getBrand("BMW") ;
    c1.getModel("M4") ;
    c1.getType("My car") ;
    c1.getColor("Carbon-black") ;
    c1.getEngine("Inline-6") ;
    
    cout << c1.Brand << endl ;
    cout << c1.Model << endl ;
    cout << c1.Type << endl ;
    cout << c1.color << endl ;
    cout << c1.Engine << endl ;

}