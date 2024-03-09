#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        int z;
        int x = 2, y = x;

        while(1)
        {
            int z = x * y; 
            y++;

            if (z == i) break;
            if (x*x > i)
            {
                cout << i << " is prime" << endl;
                break;
            }
            if (z > i)
            {
                x++;
                y = x;   
            }
        
    
        }
    }
    
}