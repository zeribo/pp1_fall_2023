#include <iostream>

using namespace std;

int main() 
{

    int n, m;
    cin >> n;
    cin >> m;

    int arr[n][m];
    int arrmin[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "coordinates of min elements:" << endl;

    int min;
    for (int i = 0; i < m; i++)
    {
        min = 0;
        for (int j = 0; j < n; j++)
        {
            
            if (arr[min][i] > arr[j][i])
            {
                min = j;
            }
        }
        arrmin[i] = arr[min][i];
        cout << min+1 << ";" << i+1 << endl; 
    }

    cout << endl;

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arrmin[i];
    }

    cout << "Their sum:" << endl;
    cout << sum << endl;

}