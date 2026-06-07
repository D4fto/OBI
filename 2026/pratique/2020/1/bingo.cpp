#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int N, K, U, x, r;
    cin >> N >> K >> U;

    vector<vector<int>> possui(U+1);
    vector<int> bin(N+1, 0);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            cin >> x;
            possui[x].push_back(i);
        }
    }

    bool bingo = false;

    for (int i = 1; i <= U && !bingo; i++) {
        cin >> r;

        for (int jogador : possui[r]) {
            bin[jogador]++;

            if (bin[jogador] == K)
                bingo = true;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (bin[i] == K)
            cout << i << ' ';
    }

    return 0;
}