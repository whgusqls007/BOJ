#include <bits/stdc++.h>

using namespace std;

class Pair {
  public:
    int x, y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Pair A, B, C;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
    double lean1 = (B.x - A.x) * (C.y - A.y);
    double lean2 = (B.y - A.y) * (C.x - A.x);

    if (lean1 == lean2) {
        cout << "-1.0";
        return 0;
    }

    double line1 = hypot(A.x - B.x, A.y - B.y);
    double line2 = hypot(A.x - C.x, A.y - C.y);
    double line3 = hypot(B.x - C.x, B.y - C.y);

    double len[3] = {line1 + line2, line1 + line3, line2 + line3};
    double min = 1e10, max = -1;
    for (int i = 0; i < 3; i++) {
        if (len[i] < min) {
            min = len[i];
        }
        if (max < len[i]) {
            max = len[i];
        }
    }

    printf("%.10lf", 2 * max - 2 * min);

    return 0;
}