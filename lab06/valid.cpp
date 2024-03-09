#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> s;
    cin >> n;

    int len = s.length();

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if ((int)s[i] - '0' <= 9 && (int)s[i] - '0' >= 0)
        {
            sum++;
        }
    }

    //cout << sum << endl;
    if (sum >= n) cout << "YES" << endl;
    else cout << "NO" << endl;
}