#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX=102;
int arr[MAX][MAX];
int n,m,k,temp=1,cnt=0;
int idx[]={0,0,1,-1};
int idy[]={1,-1,0,0};
int res[MAX*MAX];
void dfs(int x,int y){
    if(x>n && y>m)
        return;
    arr[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+idx[i];
        int ny=y+idy[i];
        if(nx>=n || nx<0  || ny>=m ||ny<0)
            continue;
        if(arr[nx][ny]==0){
            dfs(nx,ny);
            temp++;
        }
    }
}
int main(){
    cin>>m>>n>>k;
    for(int i=0;i<k;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int x=a;x<c;x++){
            for(int y=b;y<d;y++){
                arr[x][y]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                dfs(i,j);
                res[cnt]=temp;
                temp=1;
                cnt++;   
            }
        }
    }
    sort(res,res+cnt);
    cout<<cnt<<"\n";
    for(int i=0;i<cnt;i++){
        cout<<res[i]<<" ";
    }
}