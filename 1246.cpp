#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, *price;
    int goodPrice  = -1;
    int maxBenefit = -1;

    cin >> N >> M;

    price = new int[M];

    for (int i = 0; i < M; i++) {
        cin >> price[i];
    }

    sort(price, price + M);

    for (int i = 0; i < M; i++) {
        int available = (M - i) > N ? N : (M - i);
        int temp      = price[i] * available;
        if (maxBenefit < temp) {
            maxBenefit = temp;
            goodPrice  = price[i];
        }
    }
    cout << goodPrice << " " << maxBenefit;
}