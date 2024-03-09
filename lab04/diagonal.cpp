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

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[max][max] < arr[i][i])
        {
            max = i;
        }
    }

    cout << "Maximum element is: " << arr[max][max];
    cout << " with coordinates: " << max+1 << ";" << max+1;

}