#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double X, P;
    cin >> X >> P;
    double Price = P / (1 - (X / 100.0));
    cout << fixed << setprecision(2) << Price << endl;
    return 0;
}
