#include <iostream>
using namespace std;

void printCharacterNTimes(int N, char C) {
    for (int i = 0; i < N; ++i) {
        cout << C << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        char C;
        cin >> N >> C;
        printCharacterNTimes(N, C);
    }

    return 0;
}
