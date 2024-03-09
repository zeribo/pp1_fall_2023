#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // 8 4 2 1

    int arr[4] = {8, 4, 2, 1};
    int bin[4] = {0, 0, 0, 0};

    //while 

    for (int i = 0, j = 0, k = 3; i < 4, k >= 0; i++, k--)
    {
        if (j + arr[i] <= n)
        {
            j += arr[i];
            bin[i] = 1;
            
        }
    
    }

    int revbin = 0;

    for (int i = 0, j = 0; i < 4; i++)
    {
       revbin += (arr[i] * bin[i]);
    }

    //cout << revbin << endl;

    for (int i : bin) cout << i << " ";
    
    cout << endl;
}