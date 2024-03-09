#include <iostream>

using namespace std;

int main() 
{

    int n, m;
    cin >> n;
    cin >> m;

    int arr[n][m];
    int total[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }

        total[i] = sum;
    }

    
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (total[min] > total[i])
        {
            min = i;
        }
    }

    cout << min+1 << endl;    
    
        
}