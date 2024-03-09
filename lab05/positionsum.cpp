#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();

    //cout << (int)'0' - 48 << "test1" << endl;
    int oddsum = 0;
    int evensum = 0;

    for (int i = 0; i <= len; i++)
    {
        if ((i+1) % 2 != 0 && i+1 <= len)
        {
            //cout << (int)s[i] - 48 << endl;
            oddsum += (int)s[i] - 48;
        }
        if ((i+1) % 2 == 0 && i < len)
        {
            //cout << (int)s[i] - 48 << endl;
            evensum += (int)s[i] - 48;
        }
    }

    //cout << evensum << " test " << oddsum << endl;
    if (evensum == oddsum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}