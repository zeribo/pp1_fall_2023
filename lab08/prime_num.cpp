#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n);

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

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(v[i]) && v[i] > k) count++;
    }

    cout << count << endl;

}



bool is_prime(int n)
{
    int z;
    int x = 2, y = x;

    while(1)
    {
        int z = x * y; 
        y++;

        if (z == n)
        {
            return 0;
        }
        if (x*x > n)
        {
            return 1;
        }
        if (z > n)
        {
            x++;
            y = x;   
        }
        
    
    }
}