#include <iostream>
using namespace std;
int main() 
{
    char X;
    cin >> X;
    char convert;

    if (X >= 'a' && X <= 'z')
    {
        convert = X - 32;
    }
     else if (X >= 'A' && X <= 'Z')
    {
        convert = X + 32;
    } else 
    {
        convert = X;
    }

    cout << convert << endl;

    return 0;
}
