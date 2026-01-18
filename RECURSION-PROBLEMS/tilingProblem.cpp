#include <iostream>
using namespace std;
int tilingProblem(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    // vertical choice
    int ans1 = tilingProblem(n - 1); // When 1st tile placed vertically [2 X (n-1)] space left after the placement of the 1st tile


    // Horizontal choice
    int ans2 = tilingProblem(n - 2); // 2 x (n-2)

    return ans1 + ans2;
}
int main()
{
    int n;
    cout << "Enter the length of the floor : ";
    cin >> n;
    cout << "Number of ways to fit the tiles is equal to  : " << tilingProblem(n) << endl;
    return 0;
}