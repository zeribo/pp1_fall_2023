#include <iostream>

using namespace std;

int main()
{

    long long arr_x[3];
    


    for (int i = 0; i < 3; i++)
    {
        cin >> arr_x[i];
    }

    long long arr_y[arr_x[0]];

    for (int i = 0; i < arr_x[0]; i++)
    {
        cin >> arr_y[i];
    }


    for (int i = arr_x[2] - 1, j = arr_x[1] - 1, temp; i > ((arr_x[2] + arr_x[1]) / 2) - 1; i--, j++)
    {
    
        temp = arr_y[j];
        arr_y[j] = arr_y[i];
        arr_y[i] = temp;

        

        if (j < 0 || i < 0)
        {
            cout << "bruh" << endl;
            break;
        }
    }

  //  for (int i = arr_x[1] - 1, temp; i < arr_x[2]; i++)
  //  {
  //      int j = arr_x[2] - 1;
  //      temp = arr_y[i];
  //      arr_y[i] = arr_y[j];
  //      arr_y[j] = temp;
  //      j--;      
  //  }

    cout << endl << endl;

    for (int i = 0; i < arr_x[0]; i++)
    {
        cout << arr_y[i] << ' ';
    }


}
