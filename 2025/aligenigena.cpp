//13min

#include <bits/stdc++.h>

using namespace std;

set<char> ali;

int K, N;

bool ok = true;

int main(){
    cin >> K >> N;

    for (int i = 0; i < K; i++)
    {
        char x;
        cin >> x;
        ali.insert(x);
    }
    for (int i = 0; i < N; i++)
    {
        char x;
        cin >> x;
        if(!ali.count(x)){
            ok = 0;
        }
    }
    if(ok){
        cout << 'S';
    }else{
        cout << 'N';
    }
    

    return 0;
}