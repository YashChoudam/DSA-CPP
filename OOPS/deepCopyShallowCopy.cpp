#include <iostream>
#include <string>
using namespace std;
class Cars
{
public:
    string Model;
    string Color;
    int *mileage;

    Cars(string Model, string Color)
    {
        this->Model = Model;
        this->Color = Color;
        mileage = new int;
        *mileage = 12;
    }

    // Cars(Cars &orignal)        // SHALLOW COPY CONSTRUCTOR
    // {
    //     Model = orignal.Model ;
    //     Color = orignal.Color ;
    //     mileage = orignal.mileage ;

    // }

    Cars(Cars &orignal)
    {
        Model = orignal.Model;
        Color = orignal.Color;
        mileage = new int ;
        *mileage = *orignal.mileage;
    }

    ~Cars(){
        cout << "Dellocating memory " << endl ;
        if (mileage != NULL)
        {
            delete mileage ;
            mileage = NULL ;
        }
        
    }
};

int main()
{
    Cars c1("BMW M5", "Carbon black");
    cout << c1.Model << endl;
    cout << c1.Color << endl;
    cout << *c1.mileage << endl;
    return 0;
}   