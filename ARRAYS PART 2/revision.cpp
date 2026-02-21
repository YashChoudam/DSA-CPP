#include<iostream>
using namespace std ;

int kadens(int nums[], int n){
    int currentSum = 0 ;
    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];
        maxSum = max(maxSum,currentSum);
        if(currentSum < 0){
            currentSum = 0 ;
        }
    }
    return maxSum ;
}
int main(){
    int A[] ={2,-3,6,-5,4,2} ;
    cout << "Maximum sum is equal to : " << kadens(A,6) ;
    return 0 ;
}