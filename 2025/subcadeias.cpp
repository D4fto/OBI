//40min
#include <bits/stdc++.h>

using namespace std;

int resp, N, ini, fim;
string pal;


int main(){
    cin >> N >> pal;
    for (ini; ini < N; ini++)
    {
        string inversa = "";
        string normal = "";
        for (fim = ini; fim < N; fim++)
        {
            inversa = pal[fim] + inversa; 
            normal += pal[fim];
            if(inversa==normal){
                resp = max(resp, (int)normal.size());
            }
        }
        
    };
    cout << resp;
    

    return 0;
}