#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char> times;

    // Inserindo os times de A a P na fila
    for (char c = 'A'; c <= 'P'; c++) {
        times.push(c);
    }

    // Processando os 15 jogos
    for (int i = 0; i < 15; i++) {
        int m, n;
        cin >> m >> n;
        cout << times.front();
        char time1 = times.front(); times.pop();
        cout << times.front();
        char time2 = times.front(); times.pop();

        // O vencedor volta para a fila
        if (m > n) times.push(time1);
        else       times.push(time2);
    }

    // O último na fila é o campeão
    cout << times.front() << endl;

    return 0;
}
