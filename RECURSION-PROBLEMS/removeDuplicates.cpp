#include <iostream>
#include <vector>
using namespace std;
string removeDuplicates(string str)
{
    int n = str.size();
    bool map[26] = {false};
    string answer;
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        bool found = false ;
        for (int j = 0; j < answer.size(); j++)
        {
            if (answer[j] == ch)
            {
                found = true; 
                continue;
            }
        }
        if(!found){
            answer += ch ;
        }
    }
    return answer ;
}
int main()
{
    string name = "appnnacollege";
    cout << removeDuplicates(name) << endl ;
}