#include <bits/stdc++.h>

using namespace std;

int a, *b, N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a;
    b = new int[a];
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }
    sort(b, b + a);
    cout << b[0] * b[a - 1];
}