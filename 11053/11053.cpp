#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, A[1005], B[1005], Max, Min;
    cin >> N;
    A[0] = 0;
    B[0] = 0;
    Max  = 0;
    Min  = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        Min = 0;
        for (int j = 0; j < i; j++) {
            if (A[j] < A[i]) {
                if (Min < B[j]) {
                    Min = B[j];
                }
            }
        }
        B[i] = Min + 1;
        if (Max < B[i]) {
            Max = B[i];
        }
    }
    cout << Max;
}