#include <iostream>
#include <vector>
using namespace std;
int ways(int r, int c, int n, int m, string answer)
{
    if (r == n - 1 && c == m - 1)
    {
        cout << answer << "  " << endl ;
        return 1;
    }
    if (r >= n || c >= m)
    {
        return 0; 
    }

    // Right
    int val1 = ways(r, c + 1, n, m, answer + "R");
    // Left 
    int val2 = ways(r + 1, c, n, m, answer + "D");
    return val1 + val2;
}
int main()
{
    int n = 3;
    int m = 3;
    string answer = "";
    cout << "Number of ways to reach the destination is equal to : " << ways(0, 0, n, m, answer) << endl;
    return 0;
}