#include<iostream>
#include<string>
using namespace std ;

void removeDuplicates(string str, string answer, int index, bool map[26])
{
    if(index == str.length()){
        cout << answer << endl ;
        return ;
    }

    char ch = str[index] ;
    int mapIdx = (int)(ch - 'a');

    if(map[mapIdx]){
        removeDuplicates(str,answer,index+1,map);

    }else{
        map[mapIdx] = true ;
        removeDuplicates(str,answer + ch, index + 1, map);
    }
}
int main()
{
    string str = "appnnacollege" ;
    string answer = "" ;
    bool map[26] ={false} ;
    removeDuplicates(str,answer,0,map);
    return 0 ;
}