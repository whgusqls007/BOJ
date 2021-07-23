#include <bits/stdc++.h>

using namespace std;

long long int T, N, dp[100001][4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> T;

    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;

    for (int i = 1; i <= T; i++) {
        cin >> N;

        for (int j = 4; j <= N; j++) {
            dp[j][1] = (dp[j - 1][2] + dp[j - 1][3]) % 1000000009;
            dp[j][2] = (dp[j - 2][1] + dp[j - 2][3]) % 1000000009;
            dp[j][3] = (dp[j - 3][1] + dp[j - 3][2]) % 1000000009;
        }

        cout << (dp[N][1] + dp[N][2] + dp[N][3]) % 1000000009 << '\n';
    }
}