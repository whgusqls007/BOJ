#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x, y;
    cin >> N;
    int *X = new int(N);
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        X[i] = x - y;
    }
    sort(X, X + N);
    if (N % 2 == 0) {
        cout << 1;
        return 0;
    }
    cout << abs(X[N / 2] - X[N / 2 - 1]) + 1;
    return 0;
}