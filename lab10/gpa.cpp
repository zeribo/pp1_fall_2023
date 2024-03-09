#include <bits/stdc++.h>

using namespace std;
float smth(int total_mark) {
    if (total_mark >= 30) return 1.0 + ((total_mark - 50) / 5) / 3.0;
    else return 0.0;

}
int main() {
    int n;
    cin >> n;
    float total = 0.0;
    float total2 = 0.0;
    for (int i = 0; i < n; ++i) 
    {
        int att1, att2, final, credits;
        cin >> att1 >> att2 >> final >> credits;
        if ((att1 + att2) >= 30 && final >= 20)
        {
            int total_mark = att1 + att2 + final;
            float gp = smth(total_mark);
            float credit_calc = gp * credits;
            total += credit_calc;
        }
        total2 += credits;
    }
    float gpa = total / total2;
    cout << gpa << endl;

    return 0;
}