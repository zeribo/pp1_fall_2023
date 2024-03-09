#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    char vowel[5] = {'i', 'e', 'o', 'u', 'a'};

    string s;
    cin >> s;

    int len = s.length();

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (vowel[i] == s[j])
            {
                sum++;
            }
        }
    }


    

    cout << sum << endl;

}