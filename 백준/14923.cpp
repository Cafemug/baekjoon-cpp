#include <iostream>
#include <queue>
#include <algorithm>
#include <cstdio>
using namespace std;
struct three{
    int first;
    int second;
    int tot;
    int block;
};
const int MAX=1003;
three thr;
int board[MAX][MAX];
int arr[MAX][MAX][1];

int idx[]={0,0,1,-1};
int idy[]={1,-1,0,0};
int n,m,tot=0,startx,starty,endx,endy;
bool check[MAX][MAX][2];
int bfs(int x,int y,int cnt,int block){
    queue<three> q;
    check[x][y][0]=true;
    thr.first=x;
    thr.second=y;
    thr.tot=cnt;
    thr.block=block;
    q.push(thr);
    while(!q.empty()){
        thr=q.front();
        int xi=thr.first;
        int yi=thr.second;
        int cnt=thr.tot;
        int cache=thr.block;
        // cout<<xi<<" "<<yi<<"\n";
        // cout<<cnt<<"\n";
        q.pop();
        if(xi==endx-1 && yi==endy-1){
            return cnt;
        }
        for(int i=0;i<4;i++){
            int nx=xi+idx[i];
            int ny=yi+idy[i];
            if(nx>=n || nx<0 || ny>=m ||ny<0)
                continue;
            if(cache==0){
                if(!check[nx][ny][0]  && board[nx][ny]==0 ){
                    check[nx][ny][0]=true;
                    thr.first=nx;
                    thr.second=ny;
                    thr.tot=cnt+1;
                    thr.block=0;
                    q.push(thr);
                    continue;
                }
                else if(!check[nx][ny][0]  && board[nx][ny]==1 ){
                    check[nx][ny][1]=true;
                    thr.first=nx;
                    thr.second=ny;
                    thr.tot=cnt+1;
                    thr.block=1;
                    q.push(thr);
                    continue;
                }
            }
            
            else {
                if(!check[nx][ny][1] && board[nx][ny]==0){
                    check[nx][ny][1]=true;
                    thr.first=nx;
                    thr.second=ny;
                    thr.tot=cnt+1;
                    thr.block=1;
                    q.push(thr);
                }
            }

        }
        
        
    }
    return -1;
}
int main(){
    cin>>n>>m>>startx>>starty>>endx>>endy;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];

        }
    }
    int t=bfs(startx-1,starty-1,0,0);
    cout<<t;
}