#include <bits/stdc++.h>

#define MIN(A, B) (A < B ? A : B)
typedef long long lli;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli N, arr[6], min[3];
    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    if (N == 1) {
        sort(arr, arr + 6);
        cout << arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
        return 0;
    }
    min[0] = MIN(arr[0], arr[5]);
    min[1] = MIN(arr[1], arr[4]);
    min[2] = MIN(arr[2], arr[3]);
    sort(min, min + 3);

    cout << (((N - 1) * (N - 2) * 4 + (N - 2) * (N - 2)) * min[0]) +
                (((N - 2) * 4 + (N - 1) * 4) * (min[0] + min[1])) +
                (4 * (min[0] + min[1] + min[2]));
    return 0;
}