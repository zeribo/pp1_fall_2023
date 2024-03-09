#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }


    int row = 0;
    int col = 0;
    while(row+1 < n)
    {
        if((arr[row][col] == 0 && arr[row][col+1] == 0
        && arr[row+1][col] == 0 && arr[row+1][col+1] == 0) 
        || (arr[row][col] == 1 && arr[row][col+1] == 1
        && arr[row+1][col] == 1 && arr[row+1][col+1] == 1))
        
        {
            cout << "NO";
            return 0;
        }

        if (col+1 < m)
        {
            col++;
        }

        if(col+1 == m)
        {
            col = 0;
            row++;
        }
    }

    cout << "YES";
}