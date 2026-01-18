#include <iostream>
#include <vector>
using namespace std;
int firstOccurrence(vector<int> arr, int index, int target)
{
    if (index == arr.size())
    {   
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    else
    {
        return firstOccurrence(arr, index + 1, target);
    }
}
int main()
{
    vector <int> A = {1,2,3,3,3,4,3,1,2} ;
    cout << firstOccurrence(A,0,3) << endl ;
    return 0 ;
}