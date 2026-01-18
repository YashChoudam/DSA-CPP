#include <iostream>
#include <string>
using namespace std;
void printSubsets(string str, string answer)
{
    if (str.size() == 0)
    {
        cout << answer << endl;
        return;
    }
    char ch = str[0] ;
    // yes choice   
    printSubsets(str.substr(1,str.size()-1),answer+ch);
    //no choice
    printSubsets(str.substr(1,str.size()-1),answer);

}
int main()
{
    string str = "abc" ;
    string answer = "" ;
    printSubsets(str,answer);
    return 0 ;
}