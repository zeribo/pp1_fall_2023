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
    cin >> s;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if ((s[i] - '0') % 2 != 0)
        {
            //cout << s[i] - '0' << endl;
            cout << "Not valid" << endl;
            return 0;
        }
    }

    cout << "Valid" << endl;

}