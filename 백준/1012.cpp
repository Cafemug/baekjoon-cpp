#include <iostream>
#include <vector>
using namespace std;
const int MAX=52;
int n,m,k,p,res=0;
int arr[MAX][MAX];
int idx[]={0,0,1,-1};
int idy[]={1,-1,0,0};
void dfs(int x,int y){
    if(x>=n && y>=m)
        return;
    arr[x][y]=0;
    for(int i=0;i<4;i++){
        int nx=x+idx[i];
        int ny=y+idy[i];
        if(nx>=n || nx<0  || ny>=m ||ny<0)
            continue;
        if(arr[nx][ny]==1)
            dfs(nx,ny);
    }
}
int main(){
    cin>>k;
    while(k-->0){
        res=0;
        cin>>m>>n>>p;
        int a,b;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=0;
            }
        }
        for(int i=0;i<p;i++){
            cin>>a>>b;
            arr[b][a]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    dfs(i,j);
                    res++;
                }
            
            }
        }
        cout<<res<<"\n";
    }
}