#include <bits/stdc++.h>

using namespace std;

string P , newP;
map<char, set<char>> v = {
    {'a', {'b', 'c'}},
    {'e', {'d', 'f', 'g'}},
    {'i', {'h', 'j', 'k', 'l'}},
    {'o', {'m', 'n', 'p', 'q', 'r'}},
    {'u', {'s', 't', 'v', 'x', 'z'}}
};
unordered_set<char> vogais = {'a', 'e', 'i', 'o', 'u'};
vector<char> vogaisv = {'a', 'e', 'i', 'o', 'u'};

int main(){
    cin >> P;
    for (size_t i = 0; i < P.size(); i++)
    {
        if(vogais.find(P[i])!=vogais.end()){
            newP+=P[i];
            continue;
        }
        newP+=P[i];
        for (size_t j = 0; j < vogaisv.size(); j++)
        {
            if(v[vogaisv[j]].find(P[i])!=v[vogaisv[j]].end()){
                newP+=vogaisv[j];
                break;
            }
        }
        if(P[i]=='z'){
            newP+='z';
            continue;
        }
        int x = 1;
        while(vogais.find(P[i]+x)!=vogais.end()){
            x++;
        }
        newP+=P[i]+x;
        
        
    }
    cout << newP;
    
    return 0;
}