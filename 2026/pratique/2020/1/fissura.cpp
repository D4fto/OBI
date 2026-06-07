#include <bits/stdc++.h>



using namespace std;

int di[4] {1,0,-1,0};
int dj[4] {0,1,0,-1};

int N, F;
string x;
vector<string> mapa;

int main(){
  ios::sync_with_stdio(false); cin.tie(0);

  cin >> N >> F;

  mapa = vector<string>(N);

  for (int i = 0; i < N; i++)
  {
    cin >> mapa[i];
  }

  
  stack<pair<int, int>> todo;
  if(mapa[0][0]-'0' <= F){
    mapa[0][0] = '*';
    todo.push({0,0});
  }


  while (!todo.empty())
  {
    pair<int,int> y = todo.top();
    int i = y.first; 
    int j = y.second;
    char atual = mapa[i][j];
    todo.pop();

    

    for (int k = 0; k < 4; k++)
    {
      int a = i+di[k];
      int b = j+dj[k];

      if(a>=0 && a<N && b>=0 && b<N){
        if(mapa[a][b] != '*' && mapa[a][b]-'0' <= F){
          mapa[a][b] = '*';
          todo.push({a, b});
        }
      }
    }
    

  }

  for (int i = 0; i < N; i++)
  {
    cout << mapa[i] << endl;
  }


  return 0;
  
  

  
  



}