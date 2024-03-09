#include <iostream>

using namespace std;

int main() 
{
  int len;
  cin >> len;

 
  int arr[len][len];

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
          cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i][j] == arr[0][0])
            {
                sum++;
            }
          
        }
    }

    cout << sum << "test" << endl;

    if (sum == len*len)
    {
        cout << 0 << endl;
        return 0;
    }

    
    int min = arr[0][0];

    for (int i = 0; i < len; i++)
    {
    
        for (int j = 1; j < len; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }

    //cout << min << "test" << endl;
    
    
    int max = min;
    int max2nd = min;

    
    for (int i = 0; i < len; i++)
    {
        for ( int j = 0; j < len; j++ ) 
        {
        
            if(arr[i][j] > max) 
            {
                max2nd = max;
                max = arr[i][j];
            }
            else if (arr[i][j] > max2nd && arr[i][j] < max) {
                max2nd = arr[i][j];
            }
        }
    }

    


    cout << endl;


    cout << max2nd << endl;


}