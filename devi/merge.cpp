#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, ind;
    cin >> n;
    int arr_a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr_a[i];
    }

    cin >> m;
    ind = n + m - 1;
    int arr_b[n+m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr_b[i];
    }


    int i = n - 1, j = m - 1;

    while (i >= 0)
    {
        if (j >= 0 && arr_b[j] > arr_a[i])
        {
            arr_b[ind] = arr_b[j];
            j--;
        }
        else
        {
            arr_b[ind] = arr_a[i];
            i--;
        }
        ind--;
        
    }




   // for (int i = 0; i < 3; i++)
   // {
   //     arr_b[m+i+1] = arr_a[i];
   // }

    cout << endl;
    for (int i = 0; i < m+n; i++)
    {
        cout << arr_b[i] << ' ';
    }
    cout << endl;

    //cout << arr_b[5] << ' ';

}