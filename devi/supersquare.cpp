#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int out = 1;
    int i = 0;
    cin >> n;

    //for (int i = 0; out < n; i++)
    //{
    //    out = pow(2, i);
    //    cout << out << ' ';
    //}

    while (out <= n)
    {
        
        cout << out << ' ';
        out = out * 2;
        i++;
        
        
        //if (out <= n)
        //{
        //cout << out << ' ';
        //}
        
    }

    return 0;
    
}