#include <iostream>
using namespace std;
int main()
{
    float  a, b ;
    float c ;
    int choice;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "Enter your choice of operation (1.SUM 2.DIFFRENCE 3.PRODUCT 4.DIVISION ) : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        c = a + b;
        cout << "Sum of a and b is : " << c;
        break;
    case 2:
        c = a - b;
        cout << "Diffrence of a and b is : " << c;
        break;
    case 3:
        c = a * b;
        cout << "Product of a and b is : " << c;
        break;
    case 4:
        c = a / b;
        cout << "Division of a and b is : " << c;
        break;
    default:
     cout << "INVALID CHOICE ";
        break;
    }

    return 0;
}