#include <bits/stdc++.h>

using namespace std;

char table[51][51];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char table_w[8][8] = {{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                          {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                          {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                          {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                          {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                          {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                          {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                          {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

    char table_b[8][8] = {{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                          {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                          {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                          {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                          {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                          {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                          {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                          {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}};

    int N, M, cnt_b = 0, cnt_w = 0, cnt = 100000000;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> table[i][j];
        }
    }

    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            for (int x = i, tx = 0; x < i + 8; x++, tx++) {
                for (int y = j, ty = 0; y < j + 8; y++, ty++) {
                    if (table[x][y] != table_b[tx][ty]) {
                        cnt_b++;
                    }
                    if (table[x][y] != table_w[tx][ty]) {
                        cnt_w++;
                    }
                }
            }
            cnt = cnt > cnt_b ? cnt_b : cnt;
            cnt = cnt > cnt_w ? cnt_w : cnt;
            cnt_b = 0;
            cnt_w = 0;
        }
    }
    cout << cnt;
}