#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int l,r;
    cin >> s;
    cin >> l >> r;
    
    //int len = s.length();
    for (int i = l; i <= r; i++)
    {
        cout << s[i];
    }

    cout << endl;
}