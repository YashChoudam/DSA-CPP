#include <iostream>
#include <vector>
using namespace std;
void display(string str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << "  ";
    }
    cout << endl;
}
void merge(string str[], int start, int mid, int end)
{
    
    vector<string> temp;
    int i = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (str[i] <= str[j])
        {
            temp.push_back(str[i]);
            i++ ;
        }   
        else
        {
            temp.push_back(str[j]);
            j++ ;
        }
    }
    while (i <= mid)
    {
        temp.push_back(str[i]);
        i++ ;
    }
    while (j <= end)
    {
        temp.push_back(str[j]);
        j++ ;
    }
    for (int index = start, x = 0; index <= end; index++)
    {
        str[index] = temp[x++];
    }
}
void mergeSort(string str[], int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start >= end)
    {
        return;
    }
    mergeSort(str, start, mid);
    mergeSort(str, mid + 1, end);
    merge(str, start, mid, end);
}
int main()
{
    string str[] = {"sun", "earth", "mars", "mercury"};
    int n = 4;
    mergeSort(str, 0, n - 1);
    display(str, n);
    return 0;
}