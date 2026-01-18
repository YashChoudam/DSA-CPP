#include <iostream>
using namespace std;
int main()
{
    int nums[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}};
    int sum = 0;
    int j = 0;
    for (int j = 0; j < 3; j++)
    {
        sum += nums[1][j] ;
    }
    
    cout << "Sum of seconde row of the matrix is equal to : " << sum << endl;
    return 0;
}