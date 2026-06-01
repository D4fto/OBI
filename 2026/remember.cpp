#include <bits/stdc++.h> 

using namespace std;

const int sizeOfArray = 10;

int arr[sizeOfArray];
int x;

int main(){

  cin >> x;

  for(int i = 0; i < sizeOfArray; i++){
    cin >> arr[i];
    arr[i] *= x;
  }


  for(int i = 0; i < sizeOfArray; i++){
    cout << arr[i] << ' ';
  }

  cout << "Hello World";

  cin >> x;

  return 0;
}