#include <bits/stdc++.h>

#define MAXN 110

using namespace std;

int N;
set<int> amgEsp;
int friends[MAXN];

int main(){
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        char x;
        int y;
        int z = 1;


        cin >> x >> y;

        if(x=='R'){
            amgEsp.insert(y);
            
        }
        if(x=='E'){
            amgEsp.erase(y);
            
        }
        if(x=='T'){
            z=y-1;
        }
        set<int>::iterator it;
        for (it = amgEsp.begin(); it != amgEsp.end(); it++)
        {
            friends[*it]+=z;
        }
        
    }
    for (int i = 1; i < MAXN; i++)
    {
        if(friends[i]==0){
            continue;
        }
        if(amgEsp.find(i)!=amgEsp.end()){
            friends[i] = -1;
        }
        cout << i << " " << friends[i] << endl;
    }
    
    

    return 0;
}