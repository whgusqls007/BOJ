#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, P, score, *list, rank = 1;

    cin >> N >> score >> P;
    list = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> list[i];
    }

    if (N == P && list[N - 1] >= score) {
        cout << -1;
        delete[] list;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        if (score < list[i]) {
            rank++;
        } else {
            break;
        }
    }
    cout << rank;
    delete[] list;
    return 0;
}