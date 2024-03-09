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
        for (int j = 0; j < m; j++)
        {
            if ((i+j)%2 == 0) arr[i][j]++;
            else arr[i][j]--;
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}