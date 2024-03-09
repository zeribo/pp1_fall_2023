#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0)
        {
            if (arr[i] % 10 == 0)
            {
                count++;
            }
            arr[i] = arr[i] / 10;
        } 
    }

    cout << count << endl;

    
}