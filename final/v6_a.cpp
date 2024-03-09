#include <bits/stdc++.h>

using namespace std;

int main()
{
    int med, small, to_med, to_small;
    cin >> med >> small >> to_med >> to_small;

    if (med > to_med && small > to_small)
    {
        cout << "Yes" << endl;
        return 0;
    }

    if (med - to_med < small - to_small)
    {
        
    }


}