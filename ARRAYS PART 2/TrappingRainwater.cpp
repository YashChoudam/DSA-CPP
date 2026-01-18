#include <iostream>
using namespace std;
int TrappedRainwater(int arr[], int n)
{
    int Rightmax[20000];
    int Leftmax[20000];
    int Area[20000];

    Leftmax[0] = arr[0];
    Rightmax[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        Leftmax[i] = max(Leftmax[i - 1], arr[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        Rightmax[i] = max(Rightmax[i + 1], arr[i + 1]);
    }
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        Area[i] = min(Rightmax[i], Leftmax[i]) - arr[i];
        if (Area[i] > 0)
        {
            waterTrapped = waterTrapped + Area[i];
        }
    }
    return waterTrapped;
}
int main()
{
    int A[] = {4, 2, 0, 6, 3, 2, 5};
    cout << "Trapped water is  : " << TrappedRainwater(A, 7);
    return 0;
}

// #include<iostream>
// using namespace std ;
// int TrappedRainwater(int arr[],int n)
// {
//     int RightMax[20000] ;
//     int LeftMax[20000] ;
//     int Area[20000] ;
//     LeftMax[0] = arr[0] ;
//     RightMax[n-1] = arr[n-1] ;
//     int WaterTrapped = 0 ;

//     for (int i = 1; i < n; i++)
//     {
//         LeftMax[i] = max(LeftMax[i-1],arr[i-1]) ;
//     }
//     for (int i = n-2 ; i >= 0 ; i--)
//     {
//         RightMax[i] = max(RightMax[i+1],arr[i+1]) ;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         Area[i] = min(LeftMax[i],RightMax[i]) - arr[i] ;
//         if (Area[i]>0)
//         {
//             WaterTrapped = WaterTrapped + Area[i] ;
//         }

//     }
//     return WaterTrapped ;

// }
// int main()
// {
//     int heights[] = {4,2,0,6,3,2,5} ;
//     int n = sizeof(heights) / sizeof(heights[0]) ;
//     int RainWaterTrapped = TrappedRainwater(heights,n) ;
//     cout << "RAIN WATER TRAPPED IS EQUAL TO " << RainWaterTrapped ;
//     return 0 ;
// }