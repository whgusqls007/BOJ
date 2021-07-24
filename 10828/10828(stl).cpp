#include <bits/stdc++.h>

using namespace std;

int N;
stack<int> S;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    string keyword;
    for (int i = 0; i < N; i++) {
        cin >> keyword;
        if (keyword == "push") {
            int arg;
            cin >> arg;
            S.push(arg);
        } else if (keyword == "pop") {
            if (S.size() == 0) {
                cout << -1 << "\n";
            } else {
                cout << S.top() << "\n";
                S.pop();
            }

        } else if (keyword == "empty") {
            cout << S.empty() << "\n";
        } else if (keyword == "top") {
            if (S.size() == 0) {
                cout << -1 << "\n";
            } else {
                cout << S.top() << "\n";
            }
        } else {
            cout << S.size() << "\n";
        }
        keyword.clear();
    }
    return 0;
}