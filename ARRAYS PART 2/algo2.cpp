#include<iostream>
#include<vector>
using namespace std; 

long long candiesToChildren(int n)
{
    return (long long)n * (n+1)/2 ;
}

int main()
{
    int n = 10 ;
    cout << "Candies required : " << candiesToChildren(n) << endl ;
    return 0 ;
}