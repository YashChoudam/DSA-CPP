#include <iostream>
using namespace std;

void countsetbits(int num)
{
    int count = 0;
    

    while (num > 0)
    {
        int lastdigit = num & 1 ;
        count += lastdigit ;
        num = num >> 1 ;
    }
    cout << "Number of set bits in " << num << " is equal to : " << count;
}

int main()
{
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    countsetbits(n) ;
    return 0 ;
}