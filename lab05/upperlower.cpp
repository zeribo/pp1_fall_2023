#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((int)s[i] > 64 && (int)s[i] < 91)
        {
            upper++;
        }
        if ((int)s[i] > 96 && (int)s[i] < 123)
        {
            lower++;
        }
    }

    cout << lower << " " << upper << endl;


}
