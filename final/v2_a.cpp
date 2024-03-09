#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int i = 1;
    while(n > 0)
    {
        if (i % 2 == 0)
        {
            n -= 4;
        }
        if (i % 2 != 0 && i % 7 != 0)
        {
            n -= 3;
        }
        i++;
    }

    cout << i - 1 << endl;



}