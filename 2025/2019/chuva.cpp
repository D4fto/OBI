#include <bits/stdc++.h>

#define MAX 510

using namespace std;

typedef pair<int, int> pii;

pii f;
int N, M;
char matriz[MAX][MAX];

void escorre(pii wat){
    if(matriz[wat.first+1][wat.second]=='.'){
        matriz[wat.first+1][wat.second]='o';
        escorre({wat.first+1, wat.second});
        return;
    }
    if(matriz[wat.first+1][wat.second]=='#'){
        if(matriz[wat.first][wat.second+1]=='.'){
            matriz[wat.first][wat.second+1]='o';
            escorre({wat.first, wat.second+1});
        }
        if(matriz[wat.first][wat.second-1]=='.'){
            matriz[wat.first][wat.second-1]='o';
            escorre({wat.first, wat.second-1});
        }
        
    }
    return;
}


int main(){
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        string x;
        cin >> x;
        for (int j = 1; j <= x.size(); j++)
        {
            matriz[i][j] = x[j-1];
            if(matriz[i][j] == 'o'){
                f.first=i;
                f.second=j;
            }
        }
    }
    escorre(f);
    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= M; j++)
        {
            cout << matriz[i][j];
        }
        cout << endl;
    }

    return 0;
}