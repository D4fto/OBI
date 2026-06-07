#include <bits/stdc++.h>

using namespace std;

int x;

int main(){
  int y;
  
  vector<int> v1;

  v1.push_back(89);
  v1.push_back(3);
  v1.push_back(1);
  v1.push_back(988);
  v1.push_back(6);

  cout << x << " " << y << endl;


  sort(v1.begin(), v1.end());


  for(int i=0; i<v1.size(); i++){
    cout << v1[i]  << " ";
  }



  return 0;
}