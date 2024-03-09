#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << "Super" << endl;
    }
    
    if(n % 2 == 0 && n > 5 && n < 21 )
    {
        cout << "Super" << endl;
    }

    if (n % 2 == 0 && n > 1 && n < 6)
    {
        cout << "Not Super" << endl;
    }

    if (n % 2 == 0 && n > 20)
    {
        cout << "Not Super" << endl;
    }

    return 0;
}