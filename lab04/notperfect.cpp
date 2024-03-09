#include <iostream>
#include <cmath>

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

    //cout << "test" << endl;

    
    int arg;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arg = sqrt(arr[i][j]);
            if (arg*arg == arr[i][j])
            {
                arr[i][j] = arg;
            }
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



