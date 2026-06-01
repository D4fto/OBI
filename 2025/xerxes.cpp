#include <bits/stdc++.h>

using namespace std;

int x = 0, d = 0, N, D, X;

int solve(int y,int z){
    if((y+1)%5==z||(y+2)%5==z){
        d++;
        return 0;
    }
    x++;
    return 0;
}

int main(){
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> D >> X;
        solve(D, X);
    }
    if(d>x){
        cout << "dario";
        return 0;
    }
    cout << "xerxes";
    


    return 0;
}