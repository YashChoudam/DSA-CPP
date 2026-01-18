#include<iostream>
#include<string>
using namespace std;
class Car {
  string model ;
  string color ;

public : 

  Car(string model , string color)
  {
    this->model = model ;
    this->color = color ;
  }

  void getCarModel()
  {
    cout << "Model :  " << model  << endl ;
  }

  void getCarColor()
  {
    cout << "Color : " << color << endl ;
  }
};
int main()
{
  Car c1("BMW M5", "Carbon-Black") ;
  c1.getCarModel();
  c1.getCarColor();
  return 0 ;

}