#include<iostream>
#include<vector>
using namespace std ;

void print(int n)
{
    vector<int> temp ;
    while (n > 0)
    {
        int lastDigit = n % 10 ;
        temp.push_back(lastDigit);
        n = n / 10 ;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << "  " ;
    }
    cout << endl ;
}

int main()
{
    print(3205);
    print(2021);
    print(21221);
    return 0 ;
}