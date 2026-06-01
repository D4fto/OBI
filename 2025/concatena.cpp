//38min

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int lista[MAXN], soma[MAXN], N, Q, D, L, R;
queue<int> result;

int main(){
    cin >> N >> Q;
    cin >> lista[1];
    for (int i = 2; i <= N; i++)
    {
        cin >> lista[i];
        for (int j = i-1; j >0 ; j--)
        {
            soma[i]+=lista[i]*10+lista[j];
            soma[i]+=lista[j]*10+lista[i];
        }
        soma[i]+=soma[i-1];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << soma[i] << " ";
    }
    
    for (int i = 0; i < Q; i++)
    {
        cin >> L >> R;
        if(L==R){
            result.push(0);
            continue;
        }
        result.push(soma[R]-soma[L-1]);
    }
    while (!result.empty())
    {
        cout << result.front() << endl;
        result.pop();
    }
    
    
    

    
    return 0;
}