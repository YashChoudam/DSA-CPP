#include <iostream>
#include <vector>
using namespace std;
void Accept(int arr[][3], int m, int n)
{
    cout << "Enter the values of the matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter " << i << " " << j << " value : ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
}

void Display(int arr[][3], int m, int n)
{
    cout << "Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

vector<int> staircaseSearch(int arr[][4], int r, int c, int key)
{
    int i = 0, j = c - 1;
    vector<int> answer;
    while (i < r && j >= 0)
    {
        if (arr[i][j] == key)
        {
            answer.push_back(i);
            answer.push_back(j);
            break;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return answer;
}

int main()
{
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    vector<int> answer = staircaseSearch(matrix, 4, 4, 33);
    cout << "Key is placed at : " ;
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << "  " ;
    }
    cout << endl ;
    return 0;
}