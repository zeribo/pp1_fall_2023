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

    int sum1;
    for (int i = 0; i < n; i++)
    {
        sum1 = 0;
        for (int j = 0; j < m; j++)
        {
            sum1 += arr[i][j];
        }
        cout << "The sum of row number " << i+1 << " is " << sum1 << endl;
    }


    int sum2;
    for (int i = 0; i < m; i++)
    {
        sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            sum2 += arr[j][i];
        }
        cout << "The sum of column number " << i+1 << " is " << sum2 << endl;

    }

}