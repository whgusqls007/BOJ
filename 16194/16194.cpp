#include <bits/stdc++.h>
#define MIN(A, B) (A < B) ? A : B
using namespace std;

int N, P[10001], dp[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }

    dp[1] = P[1];
    for (int i = 1; i <= N; i++) {
        dp[i] = P[i];

        for (int j = 1; j <= i; j++) {
            dp[i] = MIN(dp[i], dp[i - j] + P[j]);
        }
    }

    cout << dp[N];
}