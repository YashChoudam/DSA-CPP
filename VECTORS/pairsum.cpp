/* Find if any pair in sorted vector has target sum
input array = [2,7,11,15]
target = 9
output = [0,1] vector indeices*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> Pairsum(vector<int> arr, int target)
{
    int start, end;
    start = 0;
    end = arr.size() - 1;
    int currentSum = 0 ;
    
    vector<int> answer;
    while (start < end)
    {
         currentSum = arr[start] + arr[end];
        if (currentSum == target)
        {
            answer.push_back(start);
            answer.push_back(end);
            
            return answer;
        }
        else if (currentSum > target)
        {
            end--;
        }
        else if (currentSum < target)
        {
            start++;
        }
    }
   return answer ;
    
}
int main()
{
    vector<int> A = {2,7,11,15} ;
    vector<int> B = Pairsum(A,9) ;
    cout << B[0] << "," << B[1] << endl ;
    
    return 0 ;
}