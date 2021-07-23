#include <bits/stdc++.h>
using namespace std;

int T, N, dp[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 0; i < T; i++) {
        cin >> N;
        for (int j = 4; j <= N; j++) {
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        }
        cout << dp[N] << '\n';
    }
}