#include <bits/stdc++.h>
using namespace std;

// Задача E

int main()
{
    int n;
    cin >> n;

    int x = 0;

    int i = 0;
    
    while (x <= n)
    {
        x = pow(2, i);
        
        if (x == n)
        {
            cout << "Yes" << endl;
            return 0;
        }
        i++;
    
    }

    cout << "No" <<  endl;
}