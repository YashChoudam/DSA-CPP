#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        cout << "NOT A VALID ANAGRAM ";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        int index = str1[i] - 'a';
        count[index]++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        int index = str2[i] - 'a';
        if (count[index] == 0)
        {
            return false;
        }
        else
        {
            count[index]--;
        }
    }
    cout << "VALID ANAGRAM ";
    return true;
}
int main()
{
    string A = "anagram";
    string B = "nagaram";
    isAnagram(A, B);
    return 0;
}