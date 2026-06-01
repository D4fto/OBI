#include <bits/stdc++.h>

using namespace std;

int N;
char M;
int sum = 0;
unordered_map<char, int> tipos = {
    {'P', 2},
    {'C', 2},
    {'A', 1},
    {'D', 0},
};

int main(){
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> M;
        sum+=tipos.at(M);
    }
    cout << sum;
    
    return 0;
}
