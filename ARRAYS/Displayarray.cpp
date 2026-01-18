#include <iostream>
using namespace std;
void Display(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
}

int main()
{
    int n = 8;
    int A[n] = {1, 2, 4, 8, 16, 32, 64, 128};
    Display(n, A);
    return 0;
}