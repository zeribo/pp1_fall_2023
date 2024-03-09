#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cin >> k;

    int min;

    bool check[n];
    for (int i = 0; i < n; i++) check[i] = 0;

    int j = 0;
    while(j < k)
    {
        int min = 1000;
        int index = 0;
        //cout << check[0] << 'm';
        for (int i = 0; i < n; i++)
        {
            if ((v[i] < min) && (check[i] == 0))
            {
                min = v[i];
                index = i;
                //cout << min << 'j';
            }
        }
        cout << min << ' ';
        check[index] = 1;
        //cout << v[index] << ' ';
        j++;
    }

    cout << endl;
    //for (int i : check) cout << i << ' ';

}