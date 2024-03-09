
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    char alphabet[26]; 

    for(int i = 0; i < 26; i++) 
    {
        alphabet[i] = 'a' + i; 
    }

    string s;
    cin >> s;

    int len = s.length();

    cout << len << endl;

    int i = 0;
    int j = 0;

    while(i < 26 && j < len)
    {
        //cout << "test " << i << endl;

        //cout << j << " ";
        if (s[j] != alphabet[i])
        {
            cout << s[j] << " and " << alphabet[i] << endl;
            cout << "NO" << endl;
            return 0;
        }
        j++;

        cout << j << " test " << i << endl;
        if (s[j] != alphabet[i])
        {
            i++;
        }

         
    }

    cout << "YES";

    cout << endl;
    
}

   