#include <bits/stdc++.h>

#define MIN(A, B) (A < B ? A : B)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, RGB1[1001][3], RGB2[1001][3];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> RGB1[i][0] >> RGB1[i][1] >> RGB1[i][2];
    }

    RGB2[0][0] = RGB1[0][0];
    RGB2[0][1] = RGB1[0][1];
    RGB2[0][2] = RGB1[0][2];

    for (int i = 1; i < N; i++) {
        RGB2[i][0] = MIN(RGB2[i - 1][1], RGB2[i - 1][2]) + RGB1[i][0];
        RGB2[i][1] = MIN(RGB2[i - 1][0], RGB2[i - 1][2]) + RGB1[i][1];
        RGB2[i][2] = MIN(RGB2[i - 1][0], RGB2[i - 1][1]) + RGB1[i][2];
    }

    int min = 100000000;

    for (int i = 0; i < 3; i++) {
        if (min > RGB2[N - 1][i]) {
            min = RGB2[N - 1][i];
        }
    }
    cout << min;
}