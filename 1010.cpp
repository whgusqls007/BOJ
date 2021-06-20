#include <bits/stdc++.h>

using namespace std;

int dp[31][31];

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T, N, M;

    // (x, y) = (x - 1, y - 1) + (x - 1, y - 2) + ... + (x - 1, 1)
    for (int i = 1; i < 31; i++) {
        dp[1][i] = i;
    }
    for (int i = 2; i < 31; i++) {
        for (int j = i; j < 31; j++) {
            for (int k = j - 1; k >= i - 1; k--) {
                dp[i][j] += dp[i - 1][k];
            }
        }
    }

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        cout << dp[N][M] << "\n";
    }
}