#include <bits/stdc++.h>


using namespace std;

int A, B, result, x;

int main(){
  cin >> A >> B;
  while (true)
  {
    int val = x*x*x*x*x*x;
    if(val>B){
      break;
    }
    if(val>=A){
      result++;
    }
    x++;
  }
  cout << result;
  
  return 0;
}