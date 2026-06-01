#include <bits/stdc++.h>

using namespace std;

int N;
stack<int> numbers;

int main(){
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if(x==0 && !numbers.empty()){
            numbers.pop();
            continue;
        }
        numbers.push(x);
    }
    int sum = 0;
    while (!numbers.empty())
    {
        sum+=numbers.top();
        numbers.pop();
    }
    cout << sum;
    

    return 0;
}

