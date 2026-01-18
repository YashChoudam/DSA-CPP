#include <iostream>
#include <string>
using namespace std;
void permutations(string str, string answer)
{
    int n = str.size();
    if (n == 0)
    {
        cout << answer << endl;
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        permutations(str.substr(0, i) + str.substr(i + 1, n - i - 1), answer + ch); // ith charecter choice to add in permutation
    }
}
int main()
{
    string str = "ABC";
    permutations(str, "");
}