#include<iostream>
using namespace std;

int N, x;
int sum = 0;
int objetivo = 1;
int steps = 0;
bool control = true;
int skip = 1;
int main(void){
    cin >> N;
    int pilhas[N];
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        pilhas[i]=x;
        sum+=x;
    }
    if(sum<N*(N+1)/2||(sum-(N*(N+1)/2))%N!=0){
        cout << -1;
    }
    else{
        objetivo = (sum-N*(N+1)/2)/N+1;
        for (int i = 0; i < N-1; i++)
        {
            while (pilhas[i]!=objetivo)
            {
                while (pilhas[i+skip]>=objetivo+skip&&control)
                {
                    skip++;
                    if(skip+i>=N){
                        control = false;
                    }
                }
                if(!control){
                    control=true;
                    break;
                }
                pilhas[i]--;
                pilhas[i+skip]++;

                
                steps++;
                
            }
            objetivo++;
            skip=1;
            
        }
        while (pilhas[N-1]!=objetivo)
        {
            for (int i = N-2; i >=0; i--)
            {
                if(pilhas[i]!=objetivo+(i-N+1)){
                    pilhas[i]++;
                    steps++;
                    pilhas[N-1]--;
                }
            }
            
        }
        
        cout << steps;

    }

    return 0;
;}
