#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10100;;

bool marked[MAXN];

int answers[MAXN];

int n, k;

int solve(int actual){
    if(actual == n) return 1;
    if(actual > n) return 0;
    
    if(marked[actual]) return answers[actual];
    marked[actual] = 1;

    int ans = 0;

    for (int i = 1; i <= k; i++)
    {
        if(actual + i > n) break;
        ans += solve(actual + i);
    }

    answers[actual] = ans;
    return ans;
    
}

int main(){

    cin >> n >> k;

    cout << solve(1);

    return 0;
}