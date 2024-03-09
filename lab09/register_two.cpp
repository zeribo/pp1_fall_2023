#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    pair <string, string> a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        cin >> a[i].second;
    }

    int m;
    cin >> m;

    pair <string, string> b[m];

    for (int i = 0; i < m; i++)
    {
        cin >> b[i].first;
        cin >> b[i].second;
    }


    for (int i = 0; i < m; i++)
    {
        bool x;
        x = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i].first == a[j].first && b[i].second == a[j].second)
            {
                cout << "correct password" << endl;
                x = 1;
                break;
            }
        }

        if (x == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i].first == a[j].first && b[i].second != a[j].second)
                {
                    cout << "password error" << endl;
                    x = 1;
                    break;
                }
            }
        }

        if (x == 0) cout << "login error" << endl;
    }

}
