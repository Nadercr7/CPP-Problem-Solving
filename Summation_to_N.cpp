#include <iostream>
using namespace std;
int sum (int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
    total += i;
    }
    return total;
}
int main()
{
    int x;
    cin >> x;
     int result = sum(x);
    cout << result << endl;
}
