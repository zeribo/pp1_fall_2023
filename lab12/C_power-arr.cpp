#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a = arr[0] ^ arr[1];
    for(int i = 2; i < n; i++)
    {
        a = a ^ arr[i];
    }

    //cout << (a & (a - 1)) << endl;

    if((a & (a - 1)) == 0) cout << "YES";
    else cout << "NO";

}