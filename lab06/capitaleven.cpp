#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;



}