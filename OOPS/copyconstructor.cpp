#include <iostream>
#include <string>
using namespace std;
class Cars
{
public:
    string model;
    string color;

    Cars(string model, string color)
    {
        this->model = model;
        this->color = color;
    }

    Cars(Cars &orignal)
    {
        cout << "Copying object " << endl;
        model = orignal.model;
        color = orignal.color;
    }
};
int main()
{
    Cars c1("BMW M5", "CARBON-BLACK");
    Cars c2(c1);
    cout << "Model :  " << c2.model << endl;
    cout << "Color :  " << c2.color << endl;
    return 0;
}