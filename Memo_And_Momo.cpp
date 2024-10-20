#include <iostream>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    if (z == 1) 
    {
        cout << "Both" << endl;
    }
     else if (x % z == 0 && y % z == 0)
    {
        cout << "Both" << endl;
    } 
    else if (x % z == 0)
    {
        cout << "Memo" << endl;
    } 
    else if (y % z == 0) 
    {
        cout << "Momo" << endl;
    }
     else 
    {
        cout << "No One" << endl;
    }

    return 0;
}
