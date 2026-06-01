#include <bits/stdc++.h>

using namespace std;


const int MAXN = 10100;

typedef pair<int, int> pii;


int n;

pair<bool, bool> marked[MAXN];
pii answers[MAXN];

int solve(bool last, int actual){
    int ans = 0;
    if(last){
        if(actual+1>=n-1){
            return 1;
        }
        if(marked[actual].second){
            return answers[actual].second;
        }
        
    } else{
        if(actual+1>=n-1){
            return 2;
        }
        if(actual+2>=n-1){
            return 3;
        }
        
        if(marked[actual].first){
            return answers[actual].first;
        }
        ans += solve(true, actual+2);
    }
    ans += solve(false, actual+1);
    if(last){
        answers[actual].second = ans;
        marked[actual].second = 1;
    }
    else{
        answers[actual].first = ans;
        marked[actual].first = 1;
    }
    return ans;

}

int main(){
    cin >> n;

    cout << solve(false, 0);
    return 0;
}