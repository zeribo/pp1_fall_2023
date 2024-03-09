#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int z;
    int x = 2, y = x;

    while(1)
    {
        int z = x * y; 
        y++;

        if (z == n)
        {
            cout << "No" << endl;
            break;
        }
        if (x*x > n)
        {
            cout << "Yes" << endl;
            break;
        }
        if (z > n)
        {
            x++;
            y = x;   
        }
        
    
    }
}