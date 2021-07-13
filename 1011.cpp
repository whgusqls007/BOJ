#include <bits/stdc++.h>

// typedef long long lld;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    long long x, y;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> x >> y;
        long long dist     = y - x;
        double squareRoot1 = sqrt(y - x);
        int squareRoot2    = (int)squareRoot1;
        if (squareRoot1 == squareRoot2) {
            cout << squareRoot2 * 2 - 1 << "\n";
        } else if (squareRoot2 * squareRoot2 < dist &&
                   dist <= squareRoot2 * (squareRoot2 + 1)) {
            cout << squareRoot2 * 2 << "\n";
        } else {
            cout << squareRoot2 * 2 + 1 << "\n";
        }
    }
}