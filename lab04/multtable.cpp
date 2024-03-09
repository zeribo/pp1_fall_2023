#include <iostream>

using namespace std;

int main() 
{

    int n;
    cin >> n;
   
    int arr[n][n];

    int mult;

    for (int i = 0; i < n; i++)
    {
        arr[0][i] = 0 + i;
    }

    for (int i = 1; i < n; i++)
    {
        arr[i][0] = i;
    }
    
    
    for (int i = 1; i < n; i++)
    {
    
        for (int j = 1; j < n; j++)
        {
            mult = i * j;
            arr[i][j] = mult;
        }
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    


}