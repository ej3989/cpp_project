#include "car.h"
#include "customerCar.h"
#include <vector>
#include <iostream>
#include <queue>
using namespace std;
void BFS(int x, int y,int(*visit)[100], int(*check)[100], int (*map)[100],vector<pair<int,int>> asPosition);
void customerCar::findAs(int x, int y){
    vector<pair<int,int>> checkAs= getAspostion();
    int visit[100][100]={0,};
    int check[100][100]={0,};
    int map[100][100]={0,};
    for(int i=0;i<40;i++){
        map[(int)(rand()%100)][(int)(rand()%100)]=1;
    }

    vector<pair<int,int>> asPosition;
    for( auto V:checkAs){
        asPosition.push_back(make_pair(V.first,V.second));
    }
    BFS(x,y,visit,check,map,asPosition);
}


void BFS(int x, int y,int(*visit)[100], int(*check)[100], int (*map)[100],vector<pair<int,int>> asPosition){
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    visit[x][y]=1;
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nX = x+dx[i];
            int nY = y+dy[i];
            if(0<=nX && nX<100 &&0<=nY && nY<100){
                if(map[nX][nY]==0 && visit[nX][nY]==0){
                    check[nX][nY]=check[x][y]+1;
                    visit[nX][nY]=1;
                    q.push(make_pair(nX,nY));
                }
            }
        }
    }
    int MinLong = check[asPosition[0].first][asPosition[0].second];
    int MinX = asPosition[0].first;
    int MinY = asPosition[0].second;
    for(auto G : asPosition){
        if(MinLong>check[G.first][G.second]) {
            MinLong = check[G.first][G.second];
            MinX = G.first;
            MinY = G.second;
            }
    }

    cout<<"("<<MinX<<","<<MinY<<") 로 가시면 총 "<<MinLong<<"km 걸립니다."<<endl;
}