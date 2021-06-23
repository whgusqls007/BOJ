#include <bits/stdc++.h>

using namespace std;

int L, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> L;
    int *S = new int[L];
    for (int i = 0; i < L; i++) {
        cin >> S[i];
    }
    cin >> n;

    sort(S, S + L);

    int a, b;

    for (int i = 0; i < L; i++) {
        if (S[i] == n) {
            cout << 0;
            return 0;
        } else if (n < S[i]) {
            if (i == 0) {
                a = 1;
            } else {
                a = S[i - 1] + 1;
            }
            b = S[i] - 1;
            break;
        }
    }

    cout << (n - a) * (b - n + 1) + (b - n);
    delete[] S;
    return 0;
}