#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    float d;
    d = k;

    if (n <= k)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << round((n * 2) / d) << endl;
    }

}


//  2 steaks frying
//  1 min passes
//  flip one, take out second
//  put third in
//  1 min passes
//  first is ready
//
// 