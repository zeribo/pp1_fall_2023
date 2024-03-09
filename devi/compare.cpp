#include <iostream>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    
    if (n > k)
    {
        cout << 1 << endl;
    }
    if (n < k)
    {
         cout << 2 << endl;
    }
    if (n == k)
    {
        cout << 0 << endl;
    }
}