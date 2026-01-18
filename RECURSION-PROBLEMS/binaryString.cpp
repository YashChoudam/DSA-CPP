#include <iostream>
using namespace std;
void binaryString(int n, string answer)
{
    if (n == 0)
    {
        cout << answer << endl;
        return;
    }

    if (answer[answer.size() - 1] != '1')
    {
        binaryString(n - 1, answer + "0");
        binaryString(n - 1, answer + "1");
    }
    else
    {
        binaryString(n - 1, answer + "0");
    }
}
int main()
{
    binaryString(10, "");
    return 0;
}