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
    getline(cin, s);

    //cout << s << endl;

    int n = s.length();

    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i] == vowels[j])
            {
                s[i] = '\0';
            }
        }
        //cout << s << " ";
    }
    //cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '\0') cout << s[i];
    }
    



}