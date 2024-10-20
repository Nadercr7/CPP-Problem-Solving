#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int max = 0;

    for (int i = 0; i < N; ++i) 
    {
        int num;
        cin >> num;

        if (num > max)
        {
            max = num;
        }
    }

    cout << max << endl;

    return 0;
}
