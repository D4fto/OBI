// 25min

#include <bits/stdc++.h>

using namespace std;

vector<int> notas;
int T, P;
bool S;

int main(){


    for (int i = 0; i < 5; i++)
    {
        int N;
        cin >> N;
        notas.push_back(N);
    }
    sort(notas.begin(), notas.end());
    T++;
    for (int i = 3; i >= 0; i--)
    {
        
        if(notas[i+1]>notas[i]){
            if(S){
                break;
            }
            P++;
            S = 1;
            continue;
        }
        if(S){
            P++;
            continue;
        }
        T++;
    }
    
    cout << T << " " << P;
    
    
    


    return 0;
}