#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std ;

bool isAnagram(string str, string check){
    int map[26] = {0} ;
    if(str.length() != check.length()) return false ;

    for(int i = 0 ; i < str.length() ; i++){
        int index = str[i] - 'a' ;
        map[index] += 1 ;
    }

    for(int i = 0 ; i < check.length(); i++){
        int index = check[i] - 'a' ;
        
        if(map[index] == 0){
            return false ;
        }else{
            map[index]--;
        }
    }
    return true ;
}
int main(){
    string A = "anagram";
    string B = "nagaram";
    cout << isAnagram(A, B);
    return 0;
}
