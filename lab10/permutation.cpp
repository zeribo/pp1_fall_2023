#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    bool index[n];

    for (int i = 0; i < n; i++) index[i] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                 index[i] = 1;
            }
        }
    }

    vector<int> v;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (index[i] == 0)
        {
            v.push_back(arr[i]);
            ind++;
        }
    }

    //for (int i : v) cout << i << ' ';
    do 
    {
        for (int i = 0; i < ind; i++) cout << v[i] << ' ';
        cout << endl;
    } while (next_permutation(v.begin(), v.begin()+ind));

}