#include <iostream>
using namespace std;
int main()
{
    int MARKS[10];
    for (int i = 0; i < 10; i++)
    {
        MARKS[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i << "th element  = " << MARKS[i] << endl;
    }
    return 0;
}