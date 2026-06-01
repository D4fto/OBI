#include <bits/stdc++.h>

using namespace std;

int N, times, x;
priority_queue<int, vector<int>, greater<int> > fila;

int main(){
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        fila.push(t);
    }
    times = fila.top();
    fila.pop();
    x = 1;
    while (!fila.empty())
    {
        int topo = fila.top();
        if(topo>=times){
            x++;
            times+=topo;
        }
        fila.pop();
    }
    cout << x;
    
    
    
    return 0;
}