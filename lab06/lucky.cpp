#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += s[i] - '0';
    }

    //cout << sum;
    if (sum % (s[len-1] - '0') == 0) cout << "Yes";
    else cout << "No";
}