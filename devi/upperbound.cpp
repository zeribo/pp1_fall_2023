#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    

    int arr[n];
    

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for(int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            cout << i;
            return 0;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if (arr[i] > m)
        {
            cout << i;
            return 0;
        }
    }

    cout << n;
    


}