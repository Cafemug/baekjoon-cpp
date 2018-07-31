#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
const int MAX=102;
char arr[MAX][MAX];
char arr1[MAX][MAX];
int n,m,k,temp1=0,temp2=0;
int idx[]={0,0,1,-1};
int idy[]={1,-1,0,0};
void dfs(int x,int y,char c){
    if(x>=n && y>n)
        return;
    arr[x][y]='0';
    for(int i=0;i<4;i++){
        int nx=x+idx[i];
        int ny=y+idy[i];
        if(nx>=n || nx<0  || ny>=n ||ny<0)
            continue;
        if(arr[nx][ny]==c){
            dfs(nx,ny,c);
        }
    }
}
void dfs1(int x,int y,char c){
    if(x>=n && y>=m)
        return;
    arr1[x][y]='0';
    for(int i=0;i<4;i++){
        int nx=x+idx[i];
        int ny=y+idy[i];
        if(nx>=n || nx<0  || ny>=n ||ny<0)
            continue;
        if(arr1[nx][ny]==c){
            dfs1(nx,ny,c);
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]=='G')
                arr1[i][j]='R';
            else
                arr1[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]=='G'){
                dfs(i,j,'G');
                temp1++;
            }
            else if(arr[i][j]=='B'){
                dfs(i,j,'B');
                temp1++;
            }
            else if(arr[i][j]=='R'){
                dfs(i,j,'R');
                temp1++;
            }
            if(arr1[i][j]=='R'){
                dfs1(i,j,'R');
                temp2++;
            }
            else if(arr1[i][j]=='B'){
                dfs1(i,j,'B');
                temp2++;
            }
        }
    }
    cout<<temp1<<" "<<temp2;
}