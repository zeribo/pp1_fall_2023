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

    ////

    ////

    if (arr_x[1] == arr_x[2])
    {
        cout << arr_y[arr_x[1] - 1];
        return 0;
    }

    
    long long sum = 0;
    for (int i = arr_x[1] - 1; i < arr_x[2]; i++)
    {
        sum += arr_y[i];
    }

    cout << sum << endl;

    
   

}