#include <iostream>
#include <vector>
using namespace std;
int lastOccurrence(vector<int> arr, int index, int target)
{
    if (index == 0)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    else
    {
        return lastOccurrence(arr, index - 1, target);
    }
}
int main()
{
    vector <int> A = {1,2,3,3,3,4,3,1,2,4} ;
    cout << lastOccurrence(A,A.size()-1,4) << endl ;
    return 0 ;
}