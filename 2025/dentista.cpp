#include <bits/stdc++.h>
#define MAXN 10100

using namespace std;


typedef pair<int, pair<int, int>> pii;

int N, C;
pii consultas[MAXN];

int main(){
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        consultas[i] = {y, {x, y}};
    }
    sort(consultas, consultas+N);
    C = 1;
    pii actual = consultas[0];
    for (size_t i = 1; i < N; i++)
    {
        if(actual.second.second<=consultas[i].second.first){
            C++;
            actual = consultas[i];
        }
    }
    cout << C;
    return 0;

}