#include <iostream>
#include <cstring>
using namespace std;
const int MAX=102;
int n,maxnum=-1,res=0,temp=0;
int arr[MAX][MAX];
int arr1[MAX][MAX];
int idx[]={0,0,1,-1};
int idy[]={1,-1,0,0};
void dfs(int x,int y,int p){
    if(x>n && y>n)
        return;
    arr[x][y]=-1;
    for(int i=0;i<4;i++){
        int nx=x+idx[i];
        int ny=y+idy[i];
        if(nx>n || nx<1  || ny>n ||ny<1)
            continue;
        if(arr[nx][ny]>p){
            dfs(nx,ny,p);
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr1[i][j];
            if(arr1[i][j]>maxnum)
                maxnum=arr1[i][j];
        }
    }
    for(int p=0;p<=maxnum;p++){
        memcpy(arr,arr1,sizeof(arr));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j]>p){
                    dfs(i,j,p);
                    temp++;
                }
            }
        }
        if(res<temp)
            res=temp;
        temp=0;
    }
    cout<<res;
}