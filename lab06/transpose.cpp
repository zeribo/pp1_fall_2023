#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr1[n][m];
    //int arr2[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    //cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[j][i] << ' ';
        }
        cout << endl;
    }


}