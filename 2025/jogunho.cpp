#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

vector<vector<char>> arr;
queue<pair<int, int>> rastro;
int direc[2] = {1, 1};
int speed[2] = {1, 2};
int pos[2] = {1, 1};

void draw(){
    system("cls");
    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    
}

void loop(){
    arr[pos[0]][pos[1]]=(char)rand()%128;
    rastro.push({pos[0], pos[1]});
    pos[0]+=direc[0]*speed[0];
    pos[1]+=direc[1]*speed[1];
    arr[pos[0]][pos[1]]='o';
    draw();

    if(pos[0]>=(int)arr.size()-2||pos[0]==1){
        direc[0]*=-1;
    }
    if(pos[1]>=(int)arr[0].size()-2||pos[1]==1){
        direc[1]*=-1;
    }
    if(rastro.size()>8){
        arr[rastro.front().first][rastro.front().second]=' ';
        rastro.pop();
    }
    // usleep(10000);
    

}

int main(){
    printf("\e[?25l");
    for (int i = 0; i < 20; i++)
    {
        arr.push_back({});
        for (int j = 0; j < 75; j++)
        {
            arr[i].push_back(' ');
        }
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i][0]='|';
        arr[i][arr[i].size()-1]='|';
    }
    for (size_t i = 0; i < arr[0].size(); i++)
    {
        arr[0][i]='-';
        arr[arr.size()-1][i]='-';
    }
    
    
    while (true)
    
    {
        loop();
    }
    
    
    

    return 0;
}