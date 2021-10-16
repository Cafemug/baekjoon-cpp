#include <iostream>
#include <queue>
using namespace std;
const int MAX=1003;
bool check[MAX][MAX];
int arr[MAX][MAX];
int n,m,res=0;
int idx[]={0,0,-1,1};
int idy[]={-1,1,0,0};
queue<pair<int ,int> > q;
pair<int,int> pr;
void bfs(){
    while(!q.empty()){
        int len=q.size();
        for(int i=0;i<len;i++){
            pr=q.front();
            q.pop();
            int x=pr.first;
            int y=pr.second;
            for(int t=0;t<4;t++){
                int nx=x+idx[t];
                int ny=y+idy[t];
                if(nx>n || nx<1 || ny>m || ny <1)
                    continue;
                if(!check[nx][ny] && arr[nx][ny]==0){
                    arr[nx][ny]=1;
                    check[nx][ny]=true;
                    pr.first=nx;
                    pr.second=ny;
                    q.push(pr);
                }
            }
        }
        res++;
    }
}
int main(){
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                pr.first=i;
                pr.second=j;
                check[i][j]=true;
                q.push(pr);
            }
        }
    }
    bfs();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            if(arr[i][j]==0){
                cout<<-1;
                return 0;
            }
        }
    }
    cout<<res-1;
}