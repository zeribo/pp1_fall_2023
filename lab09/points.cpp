#include <bits/stdc++.h>

// задача А

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n];
    int y[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }

    for (int i = 0, j; i < n; i++)
    {
        int min = i;
        for (j = i+1; j < n; j++)
        {
            if (x[j] < x[min]) min = j;
        }

        int temp_x, temp_y;
        temp_x = x[i];
        x[i] = x[min];
        x[min] = temp_x;

        temp_y = y[i];
        y[i] = y[min];
        y[min] = temp_y;
    }

    

    for (int i = 0; i < n; i++)
    {
        int y_len = 0;
        int start = 0;
        for (int j = i+1; j < n; j++)
        {
            if (x[j] == x[j-1])
            {
                start = j-1;
                break;
            }
            else break;
        }

        for (int j = i+1; j < n; j++)
        {
            if (x[j] == x[j-1])
            {
                y_len++;
            }
            else break;
        }

        if (y_len > 0)
        {
            sort(y+start, y+start+y_len+1);
        }


    }
    //cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << ' ' << y[i] << endl;
    }
}