#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    float h = sqrt((1.0*a*a)+(1.0*b*b));
    
    cout << setprecision(4) << h << endl;

}