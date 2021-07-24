#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    cin.ignore();
    string sentence, reverse, buffer;
    for (int i = 0; i < N; i++) {
        reverse.clear();
        buffer.clear();
        sentence.clear();
        getline(cin, sentence);
        stringstream ss(sentence);
        while (ss >> buffer) {
            for (int j = buffer.size() - 1; j > -1; j--) {
                reverse.push_back(buffer[j]);
            }
            reverse.push_back(' ');
        }
        cout << reverse << '\n';
    }
    return 0;
}