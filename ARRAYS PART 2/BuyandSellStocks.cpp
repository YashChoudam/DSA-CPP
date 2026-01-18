#include<iostream>
using namespace std ;
int Maximum(int arr[],int n)
{
    int Bestbuy[100000] ;
    Bestbuy[0] =  INT32_MAX ;
    for (int i = 1; i < n; i++)
    {
        Bestbuy[i] = min(Bestbuy[i-1],arr[i-1]) ;
    }
    int Bestsell[100000] ;
    Bestsell[0] = INT32_MIN ;
    int maxProfit = Bestsell[1];
    for (int i = 1; i < n; i++)
    {
        Bestsell[i] = arr[i] - Bestbuy[i] ;
        if (Bestsell[i]>maxProfit)
        {
            maxProfit = Bestsell[i]  ;
        }
        
    }
    return maxProfit ;
}
int main()
{
    int prices[] = {7,1,5,3,6,4} ;
    cout << "Maximum profit can be gained is equal to : " << Maximum(prices , 6) ;
    return 0 ;
}

















// #include<iostream>
// using namespace std ;
// int Maximum(int arr[],int n)
// {
//     int Bestbuy[100000] ;
//     Bestbuy[0] = INT32_MAX ;
//     for (int i = 1; i < n; i++)
//     {
//         Bestbuy[i] = min(Bestbuy[i-1],arr[i-1]) ;
//     }
//     int BestSell[100000] ;
//     BestSell[0] = INT32_MIN ;
//     int maxProfit = BestSell[1] ;
//     for (int i = 1; i < n; i++)
//     {
//         BestSell[i] = arr[i] - Bestbuy[i] ;
//         if (BestSell[i]>maxProfit)
//         {
//             maxProfit = BestSell[i] ;
//         }
        
//     }
//     return maxProfit ;
    
// }
// int main()
// {
//     int prices[] = {7,1,5,3,6,4} ;
//     cout << "Maximum profit can be gained is equal to : " << Maximum(prices , 6) ;
//     return 0 ;
// }