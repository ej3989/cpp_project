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
    vector<pair<int,int>> asPosition;
    for( auto V:checkAs){
        asPosition.push_back(make_pair(V.first,V.second));
    }
    srand(time(NULL));
    for(int i=0;i<3000;i++){
        int newX=rand()%100;
        int newY=rand()%100;
        int flag =1;
        for(auto X : asPosition){
            if(X.first==newX&&X.second==newY){
                flag =0; break;
            }
        }
        if(flag==1) map[newX][newY] = 1;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++) cout<<map[i][j];
        cout<<endl;
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
    int MinLong = 100000;
    int MinX = asPosition[0].first;
    int MinY = asPosition[0].second;
    for(auto G : asPosition){
        if(MinLong>check[G.first][G.second]&&check[G.first][G.second]!=0) {
            MinLong = check[G.first][G.second];
            MinX = G.first;
            MinY = G.second;
            }
    }
    cout<<"("<<MinX<<","<<MinY<<") 로 가시면 총 "<<MinLong<<"km 걸립니다."<<endl;
}