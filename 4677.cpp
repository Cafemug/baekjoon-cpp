#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char arr[102][102];
int count=0;
int ix[]={0,0,1,-1,1,-1,1,-1};
int iy[]={1,-1,-1,1,0,0,1,-1};
int n,m;
void dfs(int x, int y){
    arr[x][y]='*';
    for(int i=0;i<8;i++){
        int idx=x+ix[i];
        int idy=y+iy[i];
        if(idx<0 || idy<0||idx>=m||idy>=n)
            continue;
        if(arr[idx][idy]=='@'){
            dfs(idx,idy);
        }
    }
}
int main(){
    while(true){
        count=0;
        scanf("%d %d",&m ,&n);
        if(m==0 || n==0)
            return 0;
        for(int i=0;i<m;i++){
            scanf("%s",arr[i]);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]=='@'){
                    count++;
                    dfs(i,j);
                }               
            }
        }
        printf("%d\n",count);
    }    
}
