#include <iostream>
#include<algorithm>
using namespace std;

int waterTrapped(int heights[], int n)
{
    int rightMax[100000];
    int leftMax[100000];
    int area[100000];
    int waterTrapped = 0;

    leftMax[0] = heights[0];
    rightMax[n - 1] = heights[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(heights[i - 1], leftMax[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(heights[i + 1], rightMax[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        area[i] = min(leftMax[i], rightMax[i]) - heights[i];
        if (area[i] > 0)
        {
            waterTrapped += area[i];
        }
    }
    return waterTrapped ;
}

int main()
{
    int A[] = {4, 2, 0, 6, 3, 2, 5};
    cout << "Trapped water is  : " << waterTrapped(A, 7);
    return 0;
}
