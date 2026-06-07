#include <bits/stdc++.h>


using namespace std;

int N, P, M, Px, Mx, x;

int main(){

  cin >> N;

  int T[N];

  for (int i = 0; i < N; i++)
  {
    cin >> x;

    if(x == 1){
      Px++;
      continue;
    }
    Mx++;
  }

  cin >> P >> M;

  if(Px - P <=0 && Mx - M <=0){
    cout << 'S';
    return 0;
  }
  cout << 'N';



  
  


  return 0;
}