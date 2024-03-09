#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    string s;
    char x;
    int n;

    cin >> s >> x >> n;

    int sum = 0;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == x) sum++;
    }

    if (sum == n) cout << "YES" << endl;
    else cout << "NO" << endl;


}