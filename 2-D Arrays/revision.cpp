#include<iostream>
#include<vector>
using namespace std ;


void accept(int arr[][4], int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j] ;
        }
        cout << endl ;
    }
    cout << endl ;
}

void display(int arr[][4], int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "  " ;
        }
        cout << endl; 
    }
    cout << endl ;
}

vector<int> search(int arr[][4], int r, int c, int key){
    int i = 0 , j = c - 1 ;
    vector<int>answer ;
    while (i < r && j >= 0)
    {
        if(arr[i][j] == key){
            answer.push_back(i);
            answer.push_back(j);
            break ;
        }else if(arr[i][j] > key){
            j-- ;
        }else{
            i++ ;
        }
    }
    return answer ;
}

void spiralMatrix(int arr[][4], int r, int c){
    int srow , erow , scolumn , ecolumn ;
    srow = scolumn = 0 ;
    erow = r - 1 ;
    ecolumn = c - 1;

    while (srow <= erow && scolumn <= ecolumn)
    {
        // top
        for (int j = scolumn; j < ecolumn ; j++)
        {
            cout << arr[srow][j] << "  " ;
        }
        
        // left 
        for (int i = srow ; i <= erow ; i++)
        {
            cout << arr[i][ecolumn] << "  " ;
        }
        
        // bottom 
        for (int j = ecolumn - 1; j >= scolumn; j--)
        {
            if(srow == erow){
                break ;
            }
            cout << arr[erow][j] << "  " ; 
        }
        
        // right 
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scolumn == ecolumn)
            {
                break ;
            }
            
            cout << arr[i][scolumn] << "  " ;
        }
        srow++;
        scolumn++;
        erow--;
        ecolumn--;
    }
    cout << endl ;
}


int main(){
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    vector<int> answer = search(matrix, 4, 4, 33);
    cout << "Key is placed at : " ;
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << "  " ;
    }
    cout << endl ;
    spiralMatrix(matrix,4,4);
    return 0;
}