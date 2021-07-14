#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    int *arr  = new int[N + 1]();
    int *arr2 = new int[N]();
    int i = 1, j = 0, k = 1;
    while (j < N) {
        if (k == K) {
            while (true) {
                if (arr[i] != -1) {
                    arr[i]  = -1;
                    arr2[j] = i;
                    j++;
                    k = 0;
                    break;
                } else if (arr[i] == -1) {
                    i++;
                    if (i == N + 1) {
                        i = 1;
                    }
                }
            }
        }
        i++;
        if (i == N + 1) {
            i = 1;
        }
        if (arr[i] != -1) {
            k++;
        }
    }
    cout << "<";
    for (int i = 0; i < N; i++) {
        cout << arr2[i];
        if (i != N - 1) {
            cout << ", ";
        } else {
            cout << ">";
        }
    }
}