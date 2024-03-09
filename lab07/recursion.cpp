#include <bits/stdc++.h>
using namespace std;

// Задача M

void natural(int n);

int main()
{
    int n;
    cin >> n;

    natural(n);

    cout << endl;


}

void natural(int n)
{
    if (n)
    {
        natural(n-1);
    }
    else
    {
        return;
    }

    cout << n << ' ';
}