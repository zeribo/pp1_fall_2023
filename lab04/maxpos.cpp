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

  int max = arr[0][0];

  for (int i = 0; i < len; i++)
    {
      for (int j = 1; j < len; j++)
        {
          if (max < arr[i][j])
          {
            max = arr[i][j];
          }
        }
    }

    //cout << max << "test" << endl;

    for (int i = 0; i < len; i++)
    {
      for (int j = 0; j < len; j++)
        {
          if (arr[i][j] == max)
          {
            cout << i+1 << " " << j+1 << endl;
            return 0;
          }
        }
    }

}