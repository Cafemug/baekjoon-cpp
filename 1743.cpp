#include <iostream>
#include <vector>
using namespace std;
const int MAX=103;
int arr[MAX][MAX];
int n,m,k,res=0,temp=1;
int idx[]={0,0,1,-1};
int idy[]={1,-1,0,0};
void dfs(int x,int y){
    if(x>n && y>m)
        return;
    arr[x][y]=0;
    for(int i=0;i<4;i++){
        int nx=x+idx[i];
        int ny=y+idy[i];
        if(nx>n || nx<1  || ny>m ||ny<1)
            continue;
        if(arr[nx][ny]==1){
            dfs(nx,ny);
            temp++;
        }
    }
}
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]==1){
                dfs(i,j);
                if(res<temp)
                    res=temp;
                temp=1;
                
            }
        }
    }
    cout<<res;
}