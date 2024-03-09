#include <iostream>

using namespace std;

int main() 
{

    int n;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int k = 0;
    for (int i = n; i > 0; i--)
    {
        sum += arr[k][i-1];
        k++;
    }

    cout << sum << endl;

}