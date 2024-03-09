#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];   
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> s;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            s.push_back(arr[i] ^ arr[j]);
        }
    }

    int count = 0;
    for (int i : s)
    {
        for (int j : arr)
        {
            if (i == j)
            {
                count++;
                break;
            }

        }
    }

    cout << count << endl;
}