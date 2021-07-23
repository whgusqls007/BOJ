#include <bits/stdc++.h>

using namespace std;

long long int N, dp[101][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    dp[1][0] = 0;
    dp[1][1] = 1;
    dp[1][2] = 1;
    dp[1][3] = 1;
    dp[1][4] = 1;
    dp[1][5] = 1;
    dp[1][6] = 1;
    dp[1][7] = 1;
    dp[1][8] = 1;
    dp[1][9] = 1;

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < 10; j++) {
            
            if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1];
            } else if (j == 9) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
            }
        }
    }

    cout << (dp[N][0] + dp[N][1] + dp[N][2] + dp[N][3] + dp[N][4] + dp[N][5] +
             dp[N][6] + dp[N][7] + dp[N][8] + dp[N][9]) %
                1000000000;
}