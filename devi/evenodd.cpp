#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 0)
    {
        cout << "None" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else if (n % 2 != 0)
    {
        cout << "Odd" << endl;
    }

    
}