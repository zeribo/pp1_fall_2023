#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
   
    int arr[n][n];

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            cin >> arr[i][j];
        }  
    }


    int max = arr[0][0];
    int max2d;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (max < arr[i][j])
            {
                max2d = max;
                max = arr[i][j];
            }
        }
    }


    cout << max2d << endl;
  

}