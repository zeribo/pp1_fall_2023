#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    char arr[16];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = '0' + i;
    }
    for(int i = 0; i < 6; i++)
    {
        arr[i+10] = 'A' + i;
    }

    string s;
    while(n > 0)
    {
        int a = n % 16;
        s.push_back(arr[a]);
        n = n / 16;

    }

    reverse(s.begin(), s.end());
    cout << s;

}