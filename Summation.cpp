#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    long long abs_sum = 0;

    for (int i = 0; i < N; ++i) {
        long long num;
        cin >> num;
        abs_sum += num; 
    }

    cout << abs (abs_sum) << endl;

    return 0;
}
